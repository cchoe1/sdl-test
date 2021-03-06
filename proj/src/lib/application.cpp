#include "application.h"
#include "context.h"
#include <iostream>
#include <SDL.h>

using namespace Cgraph;

Application::~Application()
{
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
}

SDL_Renderer* Application::initialize(Context* ctx)
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0){
		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
	}

  load_defaults(ctx);

  return ren;
}

SDL_Texture* Application::get_texture()
{
  return texture;
}

void Application::load_defaults(Context* ctx)
{
  // Must load in this order so the correct variables are set
  load_window(ctx);
  load_renderer();
  load_texture();
}

void Application::load_texture()
{
  std::string imagePath = "/Users/cchoe/Documents/c/sdl/proj/out1.bmp";
  SDL_Surface *bmp = SDL_LoadBMP(imagePath.c_str());
  if (bmp == nullptr){
    //SDL_DestroyRenderer(ren);
    //SDL_DestroyWindow(win);
    std::cout << "SDL_LoadBMP Error: " << SDL_GetError() << std::endl;
    //shutdown();
    //return 1;
  }


  SDL_SetRenderDrawColor(ren, 0, 0, 0, SDL_ALPHA_OPAQUE);
  SDL_Texture *tex = SDL_CreateTextureFromSurface(ren, bmp);
  SDL_FreeSurface(bmp);
  if (tex == nullptr){
    std::cout << "SDL_CreateTextureFromSurface Error: " << SDL_GetError() << std::endl;
    //shutdown();
    //return 1;
  }
  texture = tex;
}

void Application::load_window(Context* ctx)
{
  SDL_Window *window = SDL_CreateWindow("Hello World!", 100, 100, ctx->get_window_width(), ctx->get_window_height(), SDL_WINDOW_SHOWN);
  if (window == nullptr){
    std::cout << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
    throw "SDL_ERROR";
    //shutdown();
    //return 1;
  }
  SDL_bool window_resizable = SDL_bool::SDL_TRUE;
  SDL_SetWindowResizable(window, window_resizable);
  SDL_SetWindowMaximumSize(window, 2000, 2000);

  win = window;
}

void Application::load_renderer()
{

  SDL_Renderer *renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
  if (renderer == nullptr){
    //SDL_DestroyWindow(win);
    std::cout << "SDL_CreateRenderer Error: " << SDL_GetError() << std::endl;
    //shutdown();
    //return 1;
  }
  ren = renderer;

}

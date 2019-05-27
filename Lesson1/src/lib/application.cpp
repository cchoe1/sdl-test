#include "application.h"
#include <iostream>
#include <SDL.h>

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

using namespace Cgraph;

Application::~Application()
{
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
}

SDL_Renderer* Application::initialize()
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0){
		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
	}

  load_defaults();

  return ren;
}

SDL_Texture* Application::get_texture()
{
  return texture;
}

void Application::load_defaults()
{
  // Must load in this order so the correct variables are set
  load_window();
  load_renderer();
  load_texture();
}

void Application::load_texture()
{
  std::string imagePath = "/Users/cchoe/Documents/c/sdl/Lesson1/out1.bmp";
  SDL_Surface *bmp = SDL_LoadBMP(imagePath.c_str());
  if (bmp == nullptr){
    //SDL_DestroyRenderer(ren);
    //SDL_DestroyWindow(win);
    std::cout << "SDL_LoadBMP Error: " << SDL_GetError() << std::endl;
    //shutdown();
    //return 1;
  }

  SDL_Texture *tex = SDL_CreateTextureFromSurface(ren, bmp);
  SDL_FreeSurface(bmp);
  if (tex == nullptr){
    std::cout << "SDL_CreateTextureFromSurface Error: " << SDL_GetError() << std::endl;
    //shutdown();
    //return 1;
  }
  texture = tex;
}

void Application::load_window()
{

  SDL_Window *window = SDL_CreateWindow("Hello World!", 100, 100, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
  if (window == nullptr){
    std::cout << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
    //shutdown();
    //return 1;
  }
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

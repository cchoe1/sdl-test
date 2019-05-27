#include "panel.h"
#include <SDL.h>

using namespace Cgraph;


void Panel::Panel()
{
  
}

void Panel::~Panel()
{
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
}

void Panel::init() // Should not do anything and stop if everything doesn't load correctly
{

	if (SDL_Init(SDL_INIT_VIDEO) != 0){
		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
		return 1;
	}

}

void Panel::load_defaults()
{
  // Must load in this order so the correct variables are set
  load_window();
  load_renderer();
  load_textures();
}

void Panel::load_texture()
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

void Panel::load_window()
{

  SDL_Window *window = SDL_CreateWindow("Hello World!", 100, 100, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
  if (window == nullptr){
    std::cout << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
    //shutdown();
    //return 1;
  }
  win = window;
}

void Panel::load_renderer()
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

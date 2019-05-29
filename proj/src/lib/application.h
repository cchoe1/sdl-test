#ifndef APPLICATION_H
#define APPLICATION_H

#include <SDL.h>
#include "context.h"

namespace Cgraph {
  class Application {

    public:
      ~Application();
      SDL_Renderer* initialize(Context* ctx);
      SDL_Texture* get_texture();

    private:
      SDL_Window* win;
      SDL_Renderer* ren;
      SDL_Texture* texture;
      SDL_Surface* surface;

      void load_defaults(Context* ctx);
      void load_window(Context* ctx);
      void load_renderer();
      void load_texture();
  };
}
#endif

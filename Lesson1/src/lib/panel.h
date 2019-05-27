#include <SDL.h>

namespace Cgraph {
  class Panel {
    public:
      Panel();
      ~Panel();

      SDL_Renderer* render();

    private:
      SDL_Window *win;
      SDL_Renderer *ren;
      SDL_Texture *texture;
      SDL_Surface *surface;

      void load_defaults();
      void load_window();
      void load_renderer();
      void load_texture();
  }
}

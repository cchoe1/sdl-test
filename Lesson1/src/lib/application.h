#include <SDL.h>

namespace Cgraph {
  class Application {

    public:
      ~Application();
      SDL_Renderer* initialize(void);
      SDL_Texture* get_texture();

    private:
      SDL_Window* win;
      SDL_Renderer* ren;
      SDL_Texture* texture;
      SDL_Surface* surface;

      void load_defaults();
      void load_window();
      void load_renderer();
      void load_texture();
  };
}

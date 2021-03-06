#include <iostream>
#include <SDL.h>
#include "lib/graph.h"
#include "lib/point.h"
#include "lib/context.h"
#include "lib/panel.h"
#include "lib/application.h"

// The rate at which the window refreshes - 16 is roughly 62.5hz
#define REFRESH_RATE_MS 16
#define WINDOW_WIDTH 1024
#define WINDOW_HEIGHT 768
#define GRAPH_WIDTH 500
#define GRAPH_HEIGHT 500
#define GRAPH_MARGIN 100
#define GRAPH_MODE Cgraph::cgraph_mode::timeseries

void shutdown() {
  printf("%s\n", "Shutting down...");
	SDL_Quit();
}

int main(int, char**)
{
  //Cgraph::Application app = new Application;
  Cgraph::Context ctx(WINDOW_WIDTH, WINDOW_HEIGHT);
  Cgraph::Context* ctx_pointer = &ctx;

  Cgraph::Application app;

  // Hacky - need to contain this within the app class
  SDL_Renderer* ren = app.initialize(ctx_pointer);
  SDL_Texture* texture = app.get_texture();

  Cgraph::Panel pan();

  //panel.load_defaults();

  Cgraph::Graph gr(ctx, GRAPH_MODE, GRAPH_WIDTH, GRAPH_HEIGHT);
  //gr.set_context(ctx);
  gr.set_margin(GRAPH_MARGIN);
  gr.set_x_tick_count(10);
  gr.set_y_tick_count(20);
  //gr.set_x_axis();
  //gr.set_y_axis();

  /**
   * Main Loop 
   */
  bool main_loop = true;
  while (main_loop) {
    //First clear the renderer
    SDL_RenderClear(ren);
    //Draw the texture
    SDL_RenderCopy(ren, texture, NULL, NULL);

    SDL_SetRenderDrawColor(ren, 0, 0, 0, SDL_ALPHA_OPAQUE);

    // Draw our axes
    gr.draw_axes(ren);
    // Draw our tick marks
    gr.draw_ticks(ren);

    // Example of using the custom Point class
    //Cgraph::Point rect_point(100, 100); // We want a point at 100,100 which corresponds to the natural position we think of (100 units left, 100 units up)
    //rect_point.set_context(ctx);
    //int true_x = rect_point.get_true_x(); // Get the true x position
    //int true_y = rect_point.get_true_y(); // Get the true y position

    //SDL_Rect rect1;
    //rect1.x = true_x;
    //rect1.y = true_y;
    //rect1.w = 2;
    //rect1.h = 100;

    //SDL_Rect rect2;
    //rect2 = rect1;
    //rect2.x = rect_point.shift_x(100).get_true_x();
    //rect2.y = rect_point.shift_y(100).get_true_y();

    //SDL_RenderDrawRect(ren, &rect1);
    //SDL_RenderDrawRect(ren, &rect2);

    SDL_Event event;
    while(SDL_PollEvent(&event)) {
      //printf("Event \n");
      switch(event.type) {
        case SDL_QUIT:
          main_loop = false;
          break;
      }
      if(event.type == SDL_QUIT) {
        break;
      }
    }

    SDL_RenderPresent(ren);
    SDL_Delay(REFRESH_RATE_MS);
  }

  /* Final leg of the program - close everything */
  //SDL_DestroyTexture(tex);
  //SDL_DestroyRenderer(ren);
  //SDL_DestroyWindow(win);
  shutdown();
  //delete app;
	return 0;
}

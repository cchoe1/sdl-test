#ifndef GRAPH_H
#define GRAPH_H

#include <SDL.h>
#include "context.h"
#include "point.h"
#include <vector>

namespace Cgraph
{

  enum cgraph_mode
  {
    nodynamic = 0,
    timeseries = 1,
  };

  /**
   * Properties of a graph:
   *
   * - Margins
   * - Height & Width
   */
  class Graph
  {
    public:

      Graph(Context ctx, cgraph_mode m, int graph_width, int graph_height);

      int get_height();
      int get_width();
      int get_margin();
      int get_x_tick_count();
      int get_y_tick_count();
      Context get_context();

      Graph set_height(int graph_height);
      Graph set_width(int graph_width);
      Graph set_margin(int graph_margin);
      Graph set_context(Context ctx);

      Graph set_x_axis(Point start);
      Graph set_y_axis(Point start);

      Graph set_x_tick_count(int num);
      Graph set_y_tick_count(int num);

      Graph draw_axes(SDL_Renderer* ren);
      Graph draw_ticks(SDL_Renderer* ren);
      Graph draw_data(SDL_Renderer* ren);

    private:
      int gheight, gwidth, gmargin;
      int x_axis_start, x_axis_end, y_axis_start, y_axis_end;
      int x_tick_count, y_tick_count;
      std::vector<int> x_ticks, y_ticks;
      Context context;
      cgraph_mode mode;

      Graph set_x_ticks();
      //Graph set_y_ticks();

      /**
       * normalizeData()
       * addData()
       */
  };
}

#endif

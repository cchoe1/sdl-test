#include <iostream>
#include <vector>
#include "graph.h"
#include "context.h"
#include <SDL.h>
#include "point.h"

using namespace Cgraph;

Graph::Graph(Context ctx, cgraph_mode m, int graph_width, int graph_height) : context(context.get_window_width(), context.get_window_height())
{
  context = ctx;
  mode = m;
  gheight = graph_height;
  gwidth = graph_width;

}

/* GETTERS */
int Graph::get_height()
{
  return gheight;
}

int Graph::get_width()
{
  return gwidth;
}

int Graph::get_margin()
{
  return gmargin;
}

int Graph::get_x_tick_count()
{
  return x_tick_count;
}

int Graph::get_y_tick_count()
{
  return y_tick_count;
}

/* SETTERS */
Graph Graph::set_height(int graph_height)
{
  gheight = graph_height;
  return *this;
}

Graph Graph::set_width(int graph_width)
{
  gwidth = graph_width;
  return *this;
}

Graph Graph::set_margin(int graph_margin)
{
  gmargin = graph_margin;
  return *this;
}

Graph Graph::set_x_axis(Point start) 
{
  x_axis_start = start.get_true_x();
  x_axis_end = start.shift_x(gwidth).get_true_x();
  return *this;
}

Graph Graph::set_y_axis(Point start) 
{
  y_axis_start = start.get_true_y();
  y_axis_end = start.shift_y(gheight).get_true_y();
  return *this;
}

Graph Graph::set_x_tick_count(int num)
{
  x_tick_count = num;
  set_x_ticks();
  return *this;
}

Graph Graph::set_y_tick_count(int num)
{
  y_tick_count = num;
  set_y_ticks();
  return *this;
}

/* FUNCTIONS */
Graph Graph::draw_axes(SDL_Renderer* ren)
{
  int offsetted_x, offsetted_y;
  int offset = get_margin();

  int window_w = context.get_window_width();
  int window_h = context.get_window_height();

  offsetted_x = 0 + offset;
  offsetted_y = window_h - offset;

  int psx = offsetted_x;// - gr.get_width();
  int pex = psx + get_width();
  int pey = offsetted_y;//- gr.get_height();
  int psy = pey - get_height();

  SDL_SetRenderDrawColor(ren, 200, 0, 200, SDL_ALPHA_OPAQUE);
  // y-axis
  SDL_RenderDrawLine(ren, psx, psy, psx, pey);
  // x-axis
  SDL_RenderDrawLine(ren, psx, pey, pex, pey);

  return *this;
}

Graph Graph::draw_ticks(SDL_Renderer* ren)
{
  int x_pos_start = 0 + get_margin() - 10;
  int x_pos_end = x_pos_start + 20;

  int y_pos_start = context.get_window_height() - get_margin() - 10;
  int y_pos_end = y_pos_start + 20;

  SDL_SetRenderDrawColor(ren, 200, 0, 200, SDL_ALPHA_OPAQUE);
  // Draw x ticks
  Point pt(0, 0);
  pt.set_context(context);
  for ( auto i = x_ticks.begin(); i != x_ticks.end(); i++ ) {
    pt.set_x(*i);
    int true_x = pt.get_true_x() + get_margin();
    SDL_RenderDrawLine(ren, true_x, y_pos_start, true_x, y_pos_end);
  }

  // Draw y ticks
  Point pt_y(0, 0);
  pt_y.set_context(context);
  for ( auto i = y_ticks.begin(); i != y_ticks.end(); i++ ) {
    printf("*i = %d\n", *i);
    pt_y.set_y(*i);
    int true_y = pt_y.get_true_y() - get_margin();
    printf("True y = %d\n", pt_y.get_true_y());
    printf("Adj y = %d\n", true_y);

    SDL_RenderDrawLine(ren, x_pos_start, true_y, x_pos_end, true_y);
  }
  //while ((p++) != '\0') {
  //}
  return *this;
}

Graph Graph::draw_data(SDL_Renderer* ren)
{

}

/**
 * PRIVATE FUNCTIONS
 */

Graph Graph::set_x_ticks()
{
  int graph_width = gwidth;
  int increment = graph_width / x_tick_count;
  int position;

  for (position = 0; position <= graph_width; position += increment) {
    x_ticks.push_back(position);
  }
  return *this;
}

Graph Graph::set_y_ticks()
{
  int graph_height = gheight;
  int increment = graph_height / y_tick_count;
  int position;

  for (position = 0; position <= graph_height; position += increment) {
    y_ticks.push_back(position);
    printf("Y tick added at %d\n", position);
  }
  return *this;
}

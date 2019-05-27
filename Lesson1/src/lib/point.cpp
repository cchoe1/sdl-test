#include "point.h"
#include <cstdlib>
#include "context.h"
#include <stdio.h>

using namespace Cgraph;

Point::Point(int x_coord, int y_coord) : context(context.get_window_width(), context.get_window_height())
{
  x = x_coord;
  y = y_coord;
  
  cartesian();
}

int Point::get_x()
{
  return x;
}

int Point::get_y()
{
  return y;
}

int Point::get_true_x()
{
  return true_x;
}

int Point::get_true_y()
{
  return true_y;
}

Point Point::set_x(int coord)
{
  x = coord;
  return *this;
}

Point Point::set_y(int coord)
{
  y = coord;
  return *this;
}

Point Point::set_context(Context graph_context)
{
  context = graph_context;
}

Point Point::cartesian() 
{
  int start_x = 0;
  int start_y = context.get_window_height();

  true_x = abs(start_x + x);
  true_y = abs(start_y - y);

  return *this;
}

Point Point::shift_x(int amt)
{
  x += amt;
  cartesian();
  return *this;
}

Point Point::shift_y(int amt)
{
  y += amt;
  cartesian();
  return *this;
}


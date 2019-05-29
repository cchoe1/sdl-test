#include "context.h"

using namespace Cgraph;

Context::Context(int wid, int heig)
{
  window_w = wid;
  window_h = heig;
}

int Context::get_window_height()
{
  return window_h;
}

int Context::get_window_width()
{
  return window_w;
}

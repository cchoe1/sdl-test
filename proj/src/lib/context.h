#ifndef CONTEXT_H
#define CONTEXT_H

namespace Cgraph 
{

  class Context 
  {
    int window_w, window_h;

    public:
      Context(int window_w, int window_h);
      int get_window_height();
      int get_window_width();
  };

}

#endif

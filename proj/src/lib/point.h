#ifndef POINT_H
#define POINT_H

/**
 * PROBLEM: We need to know the 'context' because when we consider any points on the Y-axis, we must start from the bottom.  We need to know that 'bottom' in terms of the window height (i.e. calculating the true point at a cartesian point of (100,100), we must subtract 100 from the window max height, say 640, is a (100, 540) start point)
 *
 *
 *
 */
#include "context.h"

namespace Cgraph
{
  class Point
  {
    // Corresponds to an actual pixel value on the screen, cannot be fractional
    int x, y; /* Constructor args that represent the points as if they were on a cartesian plane */
    int true_x, true_y; /* Corresponds to the actual (X,Y) coordinates that are mapped to the window */
    Context context;

    public:
      Point(int x, int y);

      int get_x();
      int get_y();

      int get_true_x();
      int get_true_y();

      Point set_x(int coord);
      Point set_y(int coord);

      Point shift_x(int amt);
      Point shift_y(int amt);

      Point set_context(Context context);


    private:
      Point cartesianX(); /* Maps the TL-BR rendering style to a cartesian plane for easier understanding */
      Point cartesianY(); /* Maps the TL-BR rendering style to a cartesian plane for easier understanding */
  };

}

#endif

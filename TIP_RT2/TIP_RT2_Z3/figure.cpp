#include "figure.h"


void figure::show()
{
    cout << "(" << x1 << " " << y1 << ")(" << x2 << " " << y2 << ")(" << x3 << " " << y3 << ")(" << x4 << " " << y4 << ") P = " << P << " S = " << S << "\n";
}
bool figure::is_prug()
{
    return (angleBP(x1, y1, x2, y2, x1, y1, x4, y4) == 90 &&
            angleBP(x2, y2, x1, y1, x2, y2, x3, y3) == 90 &&
            angleBP(x3, y3, x2, y2, x3, y3, x4, y4) == 90 &&
            angleBP(x4, y4, x1, y1, x4, y4, x3, y3) == 90);
}
bool figure::is_square()
{
    return ((angleBP(x1, y1, x2, y2, x1, y1, x4, y4) == 90 &&
             angleBP(x2, y2, x1, y1, x2, y2, x3, y3) == 90 &&
             angleBP(x3, y3, x2, y2, x3, y3, x4, y4) == 90 &&
             angleBP(x4, y4, x1, y1, x4, y4, x3, y3) == 90) &&

            (dist(x1, y1, x2, y2) == dist(x2, y2, x3, y3) &&
             dist(x1, y1, x2, y2) == dist(x3, y3, x4, y4) &&
             dist(x1, y1, x2, y2) == dist(x4, y4, x1, y1))
    );
}
bool figure::is_romb()
{
    return ((dist(x1, y1, x2, y2) == dist(x2, y2, x3, y3) &&
             dist(x1, y1, x2, y2) == dist(x3, y3, x4, y4) &&
             dist(x1, y1, x2, y2) == dist(x4, y4, x1, y1)));
}
bool figure::is_in_circle()
{
    return (dist(x1, y1, x2, y2) + dist(x3, y3, x4, y4) == dist(x2, y2, x3, y3) + dist(x4, y4, x1, y1));
}
bool figure::is_out_circle()
{
    return ((angleBP(x1, y1, x2, y2, x1, y1, x4, y4) + angleBP(x3, y3, x2, y2, x3, y3, x4, y4) == 180) &&
            (angleBP(x2, y2, x1, y1, x2, y2, x3, y3) + angleBP(x4, y4, x1, y1, x4, y4, x3, y3) == 180));
}
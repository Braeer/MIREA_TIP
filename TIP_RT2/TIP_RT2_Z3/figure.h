#include <iostream>
#include "math.h"
#include "cmath"

using namespace std;

class figure
{
private:
    float x1, x2, x3, x4;
    float y1, y2, y3, y4;
    float S;
    float P;

    const double PI = 3.1415926535897932384626433832795;

    float dist(float x1f, float y1f, float x2f, float y2f)
    {
        return sqrt(pow(x1f - x2f, 2) + pow(y1f - y2f, 2));
    }
    double angleBP(float x1f1, float y1f1, float x2f1, float y2f1, float x1f2, float y1f2, float x2f2, float y2f2)
    {
        float x1f = x1f1 - x2f1;
        float y1f = y1f1 - y2f1;
        float x2f = x1f2 - x2f2;
        float y2f = y1f2 - y2f2;

        return ((180 / PI) * acos((abs(x1f * x2f + y1f * y2f)) / (sqrt(pow(x1f, 2) + pow(y1f, 2)) * sqrt(pow(x2f, 2) + pow(y2f, 2)))));
    }

public:
    figure(float X1, float X2, float X3, float X4, float Y1, float Y2, float Y3, float Y4)
    {
        x1 = X1;
        x2 = X2;
        x3 = X3;
        x4 = X4;
        y1 = Y1;
        y2 = Y2;
        y3 = Y3;
        y4 = Y4;

        P = dist(X1, Y1, X2, Y2) + dist(X2, Y2, X3, Y3) + dist(X3, Y3, X4, Y4) + dist(X4, Y4, X1, Y1);
        S = 0.5 * sin(angleBP(X1, Y1, X3, Y3, X2, Y2, X4, Y4) / (180 / PI)) * dist(X1, Y1, X3, Y3) * dist(X2, Y2, X4, Y4);

    }
    figure()
    {

    }
    void define(float X1, float X2, float X3, float X4, float Y1, float Y2, float Y3, float Y4)
    {
        x1 = X1;
        x2 = X2;
        x3 = X3;
        x4 = X4;
        y1 = Y1;
        y2 = Y2;
        y3 = Y3;
        y4 = Y4;

        P = dist(X1, Y1, X2, Y2) + dist(X2, Y2, X3, Y3) + dist(X3, Y3, X4, Y4) + dist(X4, Y4, X1, Y1);
        S = 0.5 * sin(angleBP(X1, Y1, X3, Y3, X2, Y2, X4, Y4) / (180 / PI)) * dist(X1, Y1, X3, Y3) * dist(X2, Y2, X4, Y4);
    }
    void show();
    bool is_prug();
    bool is_square();
    bool is_romb();
    bool is_in_circle();
    bool is_out_circle();
};
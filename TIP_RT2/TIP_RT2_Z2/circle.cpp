#include "circle.h"

float radius;
float x_center;
float y_center;

float const PI = 3.1415926535;

void get_circle(float& RT, float& XT, float& YT)
{
    RT = radius;
    XT = x_center;
    YT = y_center;
};
void set_circle(float r, float x, float y)
{
    radius = r;
    x_center = x;
    y_center = y;
};
float square()
{
    return PI * radius * radius;
}
bool triangle_around(float a, float b, float c)
{
    double p = (a + b + c) / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    return (radius >= ((a + b + c) / (4 * S)));
}
bool triangle_in(float a, float b, float c)
{
    double p = (a + b + c) / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    return (radius <= S / p);
}
bool check_circle(float r, float x_cntr, float y_cntr)
{
    float dist = sqrt(pow((x_cntr - x_center), 2) + pow((y_cntr - y_center), 2));
    return (radius + r <= dist);
}

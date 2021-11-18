#include <iostream>
#include <random>
#include "zad1.hpp"
using namespace std;
void dot::set(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}
void dot::print_dot()const
{
    cout<<x<<" "<<y<<" "<<z<<" "<<endl;
}
double fRand(double fMin, double fMax)
{
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}
void dot::set_rand(double a, double b)
{
    x=fRand(a,b);
    y=fRand(a,b);
    z=fRand(a,b);
}
void dot::get(double*px, double*py, double*pz)const
{
    *px=x; *py=y; *pz=z;
}
double dot::distance2d(double x1, double y1, double z1, double x2, double y2, double z2)
{
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}
double dot::distance3d(double x1, double y1, double z1, double x2, double y2, double z2)
{
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) + (z2-z1)*(z2-z1));
}


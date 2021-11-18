#include "zad1.hpp"
#include <iostream>
using namespace std;

int main()
{
    dot d1, d2;
    d1.set(1.556, 2.588, 5.77);
    d2.set(5.66, 3.312, 10.556);
    double x1,x2,y1,y2,z1,z2;
    d1.get(&x1,&y1,&z1);
    d2.get(&x2,&y2, &z2);
    cout<<"Distance 2D="<<d1.distance2d(x1,x2,y1,y2,z1,z2)<<endl;
    cout<<"Distance 3D="<<d1.distance3d(x1,x2,y1,y2,z1,z2)<<endl;
}

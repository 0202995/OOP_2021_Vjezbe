#include <iostream>
class target
{
    double x1,y1,z1;
    double x2,y2,z2;
public:
    void set(double x1, double y1, double z1, double x2, double y2, double z2);
    void get(double*x1,double*y1,double*z1,double*x2,double*y2,double*z2);
    void hit();
    void no_hit();
};

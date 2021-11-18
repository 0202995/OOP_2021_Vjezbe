#include <iostream>
class weapon
{
    double x,y,z;
    unsigned num_bull;
    unsigned num_curr;
public:
    weapon(double xx, double yy, double zz, unsigned num_b, unsigned num_c)
    {x=xx; y=yy; z=zz; num_bull=num_b; num_curr=num_c;}
    void shoot(double*px, double*py, double*pz, double*num_c);
    void reload();
};

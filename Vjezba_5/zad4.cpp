#include "zad2.hpp"
#include "zad3.hpp"
#include <random>
using namespace std;
void weapon::shoot(double*px, double*py, double*pz, double *num_c)
{
    if(num_curr==0)
    {
        cout<<"Nema vise metaka."<<endl;
    }
    num_curr -= 1;
    *px=x; *py=y; *pz=z; *num_c=num_curr;
}
void weapon::reload()
{
    num_curr=num_bull;
}
void target::set(double x11, double y11, double z11, double x22, double y22, double z22)
{
    x11=x1; y11=y1; z11=z1; x22=x2; y22=y2; z22=z2;
}
void target::get(double*x11,double*y11,double*z11,double*x22,double*y22,double*z22)
{
    *x11=x1; *y11=y1; *z11=z1; *x22=x2; *y22=y2; *z22=z2;
}
void target::hit()
{
    cout<<"Meta je pogodjena"<<endl;
}
void target::no_hit()
{
    cout<<"Meta nije pogodjena"<<endl;
}

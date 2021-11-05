#include <iostream>
#include <math.h>
#define DISTANCE(ax,ay,sx,sy) sqrt((ay-sy)*(ay-sy) + (ax-sx)*(ax-sx))
using namespace std;
struct Pravokutnik
{
    float ax,ay,cx,cy;
};
struct Kruznica
{
    unsigned r;
    float sx,sy;
};
int intersect(Pravokutnik*niz, Kruznica k, size_t&s)
{
    int counter=0;
    for(int i=0 ; i<s; i++)
    {
        double distance = DISTANCE(niz[i].ax, niz[i].ay, k.sx, k.sy);
        if(distance<k.r)
            counter++;
    }
    return counter;
}
int main()
{
    Pravokutnik niz[] = {{6,3,9,5}, {2,4,4,7}, {4,2,7,4}};
    Kruznica k = {2,3,3};
    size_t s = sizeof(niz)/sizeof(niz[0]);
    cout<<intersect(niz, k, s);
}

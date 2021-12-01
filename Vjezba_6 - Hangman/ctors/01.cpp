#include <iostream>
using namespace std;

class point
{
    int x, y;
public:
    point(int x, int y);
    point() = default;
};

point::point(int  x, int  y) : x(x), y(y) { }


int main()
{
    point p(2, 3);
    point p1;
} 

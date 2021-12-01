#include <iostream>
using namespace std;

class point
{
    float x, y;
public:
    point() : x(0), y(0) { cout << "point ctor " << endl; }
    point(point&) { cout << "point copy ctor " << endl; }
    point(point&&) { cout << "point move ctor " << endl; }
    ~point() { cout << "~point " << endl; }
};

point f(point a)
{
    /* todo sth */
    return a;
}

int main()
{
    point p1;
    point p2(p1), p3 = p2;
    point* p4 = new point(std::move(p1));
    delete p4;
    point p5(p1);

}

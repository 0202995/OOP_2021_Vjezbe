#include <iostream>
using namespace std;

class point 
{
    int x, y;
public:
    point(int x=0, int y=0) { cout << "ctor " << endl; }
    point(const point& p) { cout << "copy ctor " << endl; }
    ~point() { cout << "destr " << endl; }
};

void f(point a)
{
    point b;
    
}

int main()
{
    point p;
    f(p);
}

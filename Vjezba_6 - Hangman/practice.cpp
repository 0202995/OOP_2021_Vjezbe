#include <iostream>
using namespace std;

class point
{
    float x, y;
public:
    point() : x{0}, y{0} { cout << "point ctor" << endl; }
    ~point() { cout << "~point " << endl; }
};

class circle
{
    point s;
    float r;
public:
    circle() { cout << "circle " << endl; }
    ~circle() { cout << "~circle " << endl; }
};

int main(){
    circle c;
}

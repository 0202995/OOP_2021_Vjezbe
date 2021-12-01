#include <iostream>
using namespace std;

class point 
{
    int x, y;
public:
    point() { cout << "ctor" << endl; }
    point(int x, int y=0) { cout << "ctor, arg" << endl; }
    ~point() { cout << "~point" << endl; }
};

int main()
{
    point p[3];
}

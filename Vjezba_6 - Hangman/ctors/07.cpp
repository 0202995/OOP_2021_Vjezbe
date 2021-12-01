#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

class A
{
    int* p;
    int n;
public:
    A(int len) : p(new int[n = len]) { cout << "ctor" << endl;}

    A(const A& other)
    {
        p = new int [n = other.n];
        // deep copy
        memcpy(p, other.p, n*sizeof(int));
        cout << "copy ctor" << endl;
    }
    
    ~A()
    {
        delete p;
        cout << "~A" << endl;
    }

};

A fun(A a)
{
    // do something
    return a;
}

int main() 
{
    A a1(10);
    A a2 = a1;
    A a3 = fun(a2);
}

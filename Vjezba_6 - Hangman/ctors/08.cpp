#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

class A
{
    int* p;
    int n;
public:
    A(int len) : p(new int[n = len]) {cout << "ctor" << endl;}

    /* copy constuctor */
    A(const A& other)     
    {
        p = new int [n = other.n];
        // deep copy
        memcpy(p, other.p, n*sizeof(int));
        cout << "copy ctor" << endl;
    }
    
    /* move constuctor */
    A(A&& other)
    {
        p = other.p;
        other.p = nullptr;
        other.n = 0;
        cout << "move ctor" << endl;
    }

    ~A()
    {
        delete[] p;
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
    A a2 = a1;      // a1 je lvalue
    A a3 = fun(a2); // fun je rvalue
}
 

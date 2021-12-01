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

    A(const A& other)
    {
        p = new int [n = other.n];
        // deep copy
        memcpy(p, other.p, n*sizeof(int));
        cout << "copy ctor" << endl;
    }
    
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


A&& goo(A& a){return std::move(a);}

void fun(A&& a)
{
                            // koji konstruktor ce se pozvati
    A aa = a;               // rhs ima ime
    A a1 = goo(a);          // rhs nema ime
}


int main() 
{
    A a(10);
    fun(std::move(a));

}
 

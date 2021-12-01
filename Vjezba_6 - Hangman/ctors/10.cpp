#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

class A
{
    vector<int> v;
public:
    A(vector<int>& v) : v(v){}
    A(vector<int>&& v) : v(std::move(v)){} // v ima ime
    size_t size() const {return v.size();}

};

int main() 
{
    std::vector<int> a = {1, 2, 3, 4, 5};
 
    auto b = A(a);
    
    std::cout << "a: " << a.size() << std::endl;
    std::cout << "b: " << b.size() << std::endl;
    
    auto c = A(std::move(a));
    
    std::cout << "a: " << a.size() << std::endl;
    std::cout << "c: " << c.size() << std::endl;
 
    return 0;
}

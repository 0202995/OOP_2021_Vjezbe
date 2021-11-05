#include <iostream>
#include <vector>
using namespace std;
using std::vector;

void insert_vector(vector<int> &v, size_t n)
{
    v.reserve(n);
    cout<<"Kapacitet:"<<v.capacity()<<endl;
}
void borders_insert(vector<int> &v, int low, int high)
{
    int elem;
    cin>>elem;
    if(elem<low && elem>high)
    {
        cout<<"Element nije u zadanom intervalu."<<endl;
    }
    while(elem>=low && elem<=high)
    {
        v.push_back(elem);
        cout<<"Kapacitet:"<<v.capacity()<<endl;
        cout<<"Size:"<<v.size()<<endl;
        cin>>elem;
    }
}




#include "Zad1.hpp"
using std::vector;
int main()
{
    vector<int> v1;
    vector<int> v2;
    cout<<"Unesite br.elemenata 1. i 2. vektora:"<<endl;
    size_t n1,n2;
    cin>>n1>>n2;
    insert_vector(v1,n1);
    insert_vector(v2,n2);
    cout<<"Unesite raspon:"<<endl;
    int low,high;
    cin>>low>>high;
    borders_insert(v1,low, high);
    borders_insert(v2,low,high);
    vector<int> v3;
    for(int i=0; i<v1.size();++i)
    {
        for(int j=0; j<v2.size();++j)
        {
            if(v1.at(i)!=v2.at(j))
            {
                v3.push_back(v1.at(i));
                break;
            }
        }
    }
    cout<<"Vector 3: ";
    for(int i=0; i<v3.size();++i)
    {
        cout<<v3.at(i)<<" ";
    }
}

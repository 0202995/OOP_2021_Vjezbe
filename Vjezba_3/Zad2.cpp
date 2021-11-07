/*Koristeći funkcije iz prvog zadatka unijeti dva vektora i formirati novi vektor koji
se sastoji od elemenata iz prvog vektora koji nisu u drugom vektoru.
*/
#include "Zad1.hpp"
using std::vector;

void new_vector(vector<int> &v3)
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
    vector<int>::iterator it;
    for(it=v1.begin(); it!=v1.end();++it)
    {
        int cnt = count(v2.begin(), v2.end(), *it);
        if(!cnt)
            v3.push_back(*it);
    }
}

int main()
{
    vector<int> v3;
    new_vector(v3);
    cout<<"Vector 3: ";
    for(int i=0; i<v3.size();++i)
    {
        cout<<v3.at(i)<<" ";
    }
}

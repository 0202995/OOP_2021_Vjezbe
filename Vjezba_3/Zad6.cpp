/*Napišite funkciju koja stringove, koje korisnik unosi, sprema u vektor stingova,
svaki string preokrene te sortira vektor po preokrenutim stringovima.*/
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using std::string;
using std::vector;
using namespace std;
void insert_reverse_and_sort_strings(vector<string>&v)
{
    string s;
    while(s!=".")
    {
        cout<<"Unesite string:"<<endl;
        cin>>s;
        v.reserve(s.size());
        if(s==".")
            break;
        reverse(s.begin(), s.begin()+s.size());
        v.push_back(s);
        sort(v.begin(), v.end());
    }
}
int main()
{
    vector<string> v;
    insert_reverse_and_sort_strings(v);
    for(int i=0; i<v.size(); ++i)
    {
        cout<<v[i]<<" ";
    }
}

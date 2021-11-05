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
void insert_strings(vector<string>&v)
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
    }
}
int main()
{
    vector<string> v;
    insert_strings(v);
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); ++i)
    {
        cout<<v[i]<<" ";
    }
}

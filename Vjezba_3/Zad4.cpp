/*Napisati funkciju u za uklanjanje elementa iz vektora sa što manje operacija.
Poredak elemenata u vektoru nije bitan.
*/#include <iostream>
#include <vector>
using namespace std;
using std::vector;
void u(vector<int>&v)
{
    vector<int>::iterator it;
    cout<<"Odaberite indeks elementa za uklanjanje:"<<endl;
    unsigned n;
    cin>>n;
    it=v.begin()+n;
    v.erase(it);
}
int main()
{
    vector<int> v{1,2,3,4,5,6,7};
    u(v);
    for(int i=0; i<v.size(); ++i)
        cout<<v.at(i)<<" ";

}


/*Napisati funkciju u za uklanjanje elementa iz vektora sa što manje operacija.
Poredak elemenata u vektoru nije bitan.
*/#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using std::vector;
void remove_low_oper(vector<int>&v)
{
    vector<int>::iterator it=v.end()-1;
    cout<<"Odaberite index elementa u vektoru za ulanjanje:"<<endl;
    int n;
    cin>>n;
    if(n<0 | n>=v.size())
        cout<<"index ne odgovara vektoru."<<endl;
    swap(*(v.begin()+n),*it);
    v.pop_back();
}
int main()
{
    vector<int> v{1,2,3,4,5,6,7};
    remove_low_oper(v);
    for(int i=0; i<v.size(); ++i)
        cout<<v.at(i)<<" ";

}


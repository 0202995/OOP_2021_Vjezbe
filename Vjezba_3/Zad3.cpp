/*Koristeći STL funkcije sortirajte vektor, ubacite 0 ispred najmanjeg elementa, te
sumu svih elemenata iza najvećeg elementa.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using std::vector;
int main()
{
    vector<int> v{44,21,78,33,124,255,91,13,7,54};
    vector<int>::iterator it=min_element(v.begin(), v.end());
    v.insert(it, 0);
    it=max_element(v.begin(), v.end());
    int sum=0;
    for(it=it+1; it!=v.end(); ++it)
    {
        sum+=*it;
    }
    cout<<"sum="<<sum<<endl;

    for(int i=0; i<v.size(); ++i)
    {
        cout<<v.at(i)<<" ";
    }

}


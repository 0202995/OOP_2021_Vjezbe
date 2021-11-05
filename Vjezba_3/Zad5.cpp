/*Napisati funkciju koja broji koliko pojavljivanja danog
podstringa ima u stringu koristeći funkcije standardne biblioteke*/
#include <iostream>
#include <string>
#include <cstring>
using std::string;
int count_substr(string &s, string &sub)
{
    int count=0;
    for(int i=0; i<s.size(); ++i)
    {
        int z=0;
        for (int j=i; j<i+sub.size();++j)
        {
            if(s[j]==sub[z])
            {
                z++;
                if(z==sub.size())
                {
                    count++;
                }
            }
            else
            {
                break;
            }
        }
    }
    return count;
}
using namespace std;
int main()
{
    string s{"aaabaaabbbaaab"};
    string sub{"aab"};
    cout<<"Broj ponavljanja substringa u stringu je:"<<count_substr(s,sub)<<endl;
}

/*Napisati funkciju koja broji koliko pojavljivanja danog
podstringa ima u stringu koristeći funkcije standardne biblioteke*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int count_substr(string &str, string &substring)
{
    int cnt=0;
    size_t found = str.find(substring);
    while(found != string::npos)
    {
        cnt++;
        found = str.find(substring, found+1);
    }
    return cnt;
}
using namespace std;
int main()
{
    string str{"aaabaaabbbaaab"};
    string substring{"ab"};
    int n = count_substr(str,substring);
    cout<<"Broj ponavljanja substringa u stringu je:"<<n<<endl;
}

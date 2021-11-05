/*Napisati funkcije za unos i ispis vektora brojeva. Prototipove funkcija staviti u
.hpp datoteke, a implementaciju u .cpp datoteke.
Za unos vektora napisati dvije funkcije:
• funkcija čiji su parametri referenca na vektor i broj elemenata vektora,
• funkcija čiji su parametri referenca na vektor i granice intervala u kojem
trebaju biti elementi vektora. Elementi vektora se unose u funkciji, sve dok
se ne unese broj koji nije u danom intervalu.
*/
#include "Zad1.hpp"
using std::vector;
int main()
{
    vector<int> v;
    vector<int>::iterator it;
    size_t n;
    int low, high;
    cout<<"Unesite broj elemenata vektora:"<<endl;
    cin>>n;
    insert_vector(v,n);
    cout<<"Unesite donju i gornju granicu raspona vrijednosti u vektoru:"<<endl;
    cin>>low>>high;
    borders_insert(v, low, high);
    cout<<"Vector:"<<endl;
    for(size_t i=0; i<v.size(); ++i)
    {
        cout<<v.at(i)<<" ";
    }
}

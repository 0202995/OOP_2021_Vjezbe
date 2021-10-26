/* Definirati strukturu kruznica i strukturu pravokutnik koja predstavlja
pravokutnik čije su stranice paralelne sa osima apscisa i ordinata.Napisati
funkciju koja prima niz pravokutnika i jednu kruznicu i vraća broj pravokutnika koji sijeku kružnicu.
Niz pravokutnika i kružnica šalju se u funkciju pomoću const referenci.
Napomena:
– Jednadžba kružnice sa središtem u S(xs, ys) radijusa r
(x − xs)^2 + (y − ys)^2 = r^2
– Pravokutnik u koordinatnom sustavu je određen sa svojom donjom lijevom i gornjom desnom točkom.
*/
using namespace std;
#include <iostream>
#define RADIJUS(x,xs,y,ys) sqrt((x − xs)^2 + (y − ys)^2)
struct Kruznica {
	unsigned r;
	int xs, ys;
};
struct Pravokutnik {
	int ax,ay,cx,cy;
};

int intersect(Pravokutnik*niz, Kruznica k)
{
	int i = 0;
}
int main()
{
	Kruznica k = { 2,1,1 };
	Pravokutnik niz[] = { {1,1,3,3}, {4,4,7,7}, {-1,1,1,3} };
	int len_prvk = sizeof(niz) / sizeof(niz[0]);
	cout << len_prvk;
}


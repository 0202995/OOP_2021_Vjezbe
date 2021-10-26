// Napisati funkciju koja raèuna najveæi i najmanji broj u nizu od n prirodnih
// brojeva. Funkcija vraæa tražene brojeve pomoæu referenci.

#include <iostream>
using namespace std;
void max_min(int& max, int& min, int n, int* arr)
{
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	for (int j = 1; j < n; ++j)
	{
		if (arr[j] < min)
			min = arr[j];
	}
}
int main()
{
	int n;
	cout << "Unesite n:" << endl;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	int max = arr[0];
	int min = arr[0];
	max_min(max, min, n, arr);
	cout << "Najveci broj je: " << max << endl;
	cout << "Najmanji broj je: " << min << endl;
	cout << sizeof(arr[n]) << endl;
}

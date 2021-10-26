//Napisati rekurzivnu funkciju za traenje najveæeg i najmanjeg broja u nizu.//

#include <iostream>
#include <algorithm>
using namespace std;
int min_rek(int*arr, int n)
{
	if (n == 1)
		return arr[0];
	return min(arr[n - 1], min_rek(arr, n - 1));
}
int max_rek(int*arr, int n)
{
	if (n == 1)
		return arr[0];
	return max(arr[n - 1], max_rek(arr, n - 1));
}
int main()
{
	int n;
	cout << "Unesite velicinu niza:" << endl;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cout << "Unesite " << i + 1 << ". broj niza:" << endl;
		cin >> arr[i];
	}
	cout << "Najmanji broj niza je:" << min_rek(arr, n) << endl;
	cout << "Najveci broj niza je:" << max_rek(arr, n) << endl;
}


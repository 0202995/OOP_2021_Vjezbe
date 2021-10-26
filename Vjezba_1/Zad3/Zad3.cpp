//Napisati iterativnu funkciju za traženje najvećeg i najmanjeg broja u nizu.

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int n, max, min;
	cout << "unesi velicinu niza" << endl;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "unesite " << i + 1 << ". broj" << endl;
		cin >> arr[i];
	}
	max = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "Najveci broj niza je:" << max << endl;;
	min = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "Najmanji broj niza je:" << min;
}


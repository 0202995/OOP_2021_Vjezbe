// Napisati funkciju koja vra�a referencu na neki element niza. 
// Koriste�i povratnu vrijednost funkcije kao lvalue uve�ajte i-ti element niza za jedan.

#include <iostream>
using namespace std;

int &return_lvalue(int* arr, int n) {
	return arr[n];
}

int main()
{
	int arr[] = { 1,2,3,4 };
	int len = sizeof(arr) / sizeof(arr[0]);
	return_lvalue(arr, 2)+=1;
	
	
	for (int i = 0; i < len; ++i)
		cout << arr[i] << " ";
}


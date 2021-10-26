// Definirati strukturu koja opisuje matricu. Napisati program za osnovne
//operacije s matricama èiji su elementi decimalni brojevi(float).Program
//treba imati sljedeæe funkcije :
//• funkciju za unos matrice mxn,
//• funkciju za generiranje matrice mxn s elementima u rasponu[a, b],
//• funkcije za zbarajanje, oduzimanje, množenje matrica,
//• funkciju za trasponiranje matrice,
//• funkciju za ispisivanje matrice.Elementi matrice se ispisuju na èetiri
//decimale, poravnati udesno.

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int rows,cols;
	cout << "unesi redove" << endl;
	cin >> rows;
	cout << "unesi stupce" << endl;
	cin >> cols;
	int**matrix = new int*[rows];
	for (int i = 0; i < rows; ++i)
		matrix[i] = new int[cols];
	for (int j = 0; j < rows; j++)
		for (int k = 0; k < cols; k++)
			cin >> matrix[j][k];	for (int j = 0; j < rows; j++)
		for (int k = 0; k < cols; k++)
			cout << matrix[j][k];
}

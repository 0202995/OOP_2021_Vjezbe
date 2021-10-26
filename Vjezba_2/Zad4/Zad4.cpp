#include <cstddef>
#include <iostream>
#include <stdlib.h>
using namespace std;
struct MyVector
{
	int* arr;
	size_t size=0, capacity=0;

	// member functions
	void vector_new(int n) {
		arr = new int[n];
		size = 0;
		capacity = n;
	}
	void vector_delete() {
		delete arr;
	}
	void vector_push_back(int n) {
		if (size == capacity) 
		{
			capacity *= 2;
			int* arrN = new int[capacity];
			for (int i = 0; i < (capacity - 1); i++)
			{
				arrN[i] = arr[i];
			}
			delete[] arr;
			arr = arrN;
		}
		arr[size] = n;
		size++;
	}
	/* adds a new element at the end of the vector */
	void vector_pop_back() {
		size -= 1;
	}/* removes the last element in the vector */
	int& vector_front() {
		return arr[0];
	}
	/* returns a reference to the first element in the vector*/
	int& vector_back() {
		return arr[size - 1];
	}/* returns a reference to the last element in the vector */
	size_t vector_size() {
		return size;

	}/* returns the number of the elements in the vector */

	void print_vector() {
		for (int i = 0; i < vector_size(); i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};
int main()
{
	MyVector mv;
	mv.vector_new(4);

	int m;
	cout << "Unesi element, Ctrl+d (linux) ili Ctrl+z (win) za kraj unosa" << endl;
	while (cin >> m)
		mv.vector_push_back(m);

	cout << "first element " << mv.vector_front() << endl;
	cout << "last element " << mv.vector_back() << endl;
	mv.print_vector();

	cout << "removing last element" << endl;
	mv.vector_pop_back();
	mv.print_vector();

	cout << "size " << mv.vector_size() << endl;
	cout << "capacity " << mv.capacity << endl;

	mv.vector_delete();
}

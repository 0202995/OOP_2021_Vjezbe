#include "Zad4.hpp"

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


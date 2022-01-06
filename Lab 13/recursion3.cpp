//Name: Tahmina Akther Munni
//Professor: Tong Yi
//CSCI 13500
//Lab 13 C
//add a new function which receives an array (as a pointer to its first element) 
//and the size of the array, and should return the sum of its elements. The function 
//itself should not do any new dynamic memory allocations.
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void printRange(int left, int right);
int sumRange(int left, int right);
int sumArray(int* arr, int size);
bool isAlphanumeric(string s);

int main() {
    cout <<"------\n" << "Task c" << endl;
    int size = 3;
    int *arr = new int[size];// allocate aray dynamically
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    int sum = sumArray(arr, size);// add all elements
    cout << "Sum is " << sum << endl;
    delete[] arr;
}

int sumArray(int* arr, int size) {
    //base case is when we have added all elemnts in array
    if (size ==0) {
        return 0;
    }
    int idx = size-1; // the indez of the elem we want
    int element = arr[idx];
    //int element = *(arr + idx);
    return element + sumArray(arr, size-1);
}
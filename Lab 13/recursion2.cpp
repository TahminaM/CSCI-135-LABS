//Name: Tahmina Akther Munni
//Professor: Tong Yi
//CSCI 13500
//Lab 13 B
//In the same program recursion.cpp, add a function
//that computes the sum of all numbers in range left ≤   x   ≤ right
//What makes it different from the previous example, this function has to return the answer

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void printRange(int left, int right);
int sumRange(int left, int right);
int sumArray(int* arr, int size);
bool isAlphanumeric(string s);

int main() {
    cout <<"------\n" << "Task B" << endl;
    int x = sumRange(1, 3);
    cout << x << endl; //6
}

int sumRange(int left, int right) {
    //if the range is empty, the sun is zero
    //base case is when we want to stop adding
    if (left > right) {
        return 0;
    }
    //compute next value with recursive call
    return left + sumRange(left + 1, right);
}

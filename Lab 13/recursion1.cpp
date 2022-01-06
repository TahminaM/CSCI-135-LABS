//Name: Nabi Buttar
//Professor: Tong Yi
//CSCI 13500
//Lab 13 A
//Write a program recursion.cpp, defining a function
//that prints all numbers in range left ≤   x   ≤ right, separated by spaces. 
//When left > right, the range is empty and the program should not print any numbers.
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void printRange(int left, int right);
int sumRange(int left, int right);
int sumArray(int* arr, int size);
bool isAlphanumeric(string s);

int main() {
    cout <<"------\n" << "Task A" << endl;
    printRange(2,10);
    cout << endl;
}

void printRange(int left, int right) {
    //range is empty
    //base case is when we want to stop
    //printing numbers
    if (left > right) {
        return;
    }
    cout << left << " ";
    //make recursive call
    //to print next values
    printRange(left + 1, right);
}
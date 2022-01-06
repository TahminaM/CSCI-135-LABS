
//Name: Tahmina kther munni
//Professor: Tong Yi
//CSCI 13500
//Lab 13 D
//add a new function which returns true if all characters 
//in the string are letters and digits, otherwise returns false
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void printRange(int left, int right);
int sumRange(int left, int right);
int sumArray(int* arr, int size);
bool isAlphanumeric(string s);

int main() {
    cout <<"------\n" << "Task D" << endl;
    cout << boolalpha; // prints values as true/false
    cout << isAlphanumeric("Abcd1234xyz") << endl;
    cout << isAlphanumeric("KLMN 8-7-6") << endl;
}

bool isAlphanumeric(string s) {
    //base case
    if (s.empty()){
        return true;
    }
    return isalnum(s[0]) && isAlphanumeric(s.substr(1));
}
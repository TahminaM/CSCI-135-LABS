/*****************************************************************************
Link to LAB 1: https://maryash.github.io/135/labs/lab_01.html

Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab_1A.
This program asks the  user to input two integer numbers and prints out the smaller of the two numbers.
 
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int num1,num2; // deffine variables
    cout << "Enter the first number: " ;  // ask for first number
    cin >> num1;
    cout << "Enter the second number: " ;  // ask for second number
    cin >> num2;
    if(num1 < num2)    //if num1 is less than num2
    {
        cout << "The smaller of the two is "<< num1;
    }
    else
        cout << "The smaller of the two is "<< num2;
    
    return 0;
}

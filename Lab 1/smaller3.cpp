/******************************************************************************
Link to LAB 1: https://maryash.github.io/135/labs/lab_01.html

Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Yesmin Hasan
Assignment: Lab1 B.
This program asks the  user to input three integer numbers, and prints out the smallest of the three.
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int num1,num2,num3;
    cout << "Enter the first number: " ; // ask for first number
    cin >> num1;
    cout << "Enter the second number: " ; // ask for second number
    cin >> num2;
    cout << "Enter the third number: " ; // ask for third number
    cin >> num3;
    
    if(num1 < num2 and num1 < num3)//if num1 is  smaller than num2 and num3
    {
        cout << "The smaller of the three is "<< num1;
    }
    
    else if(num2 < num1 and num2 < num3)
    {
        cout << "The smaller of the three is "<< num2;
    }    
    else 
    
        cout << "The smaller of the three is "<< num3;
       
    
    return 0;
}

    
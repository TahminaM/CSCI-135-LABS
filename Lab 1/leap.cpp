/******************************************************************************
Link to LAB 1: https://maryash.github.io/135/labs/lab_01.html

Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Yesmin Hasan
Assignment: Lab1 C.
This program asks the  user to input an integer representing a year number(1999,2016 etc)if the input year is a leap year according to the modern Gregorian calender it will prints Leap year, otherwise, print Common year.
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter year: " ;
    cin >> year;
    
    
    if(year % 4 != 0)                     // if year is not divisible by 4, then its a common year
    {
        cout << "Common year "<< endl;
    }
    
    else if(year % 100 != 0)              // if year is not divisible by 100, then its a Leap year
    {
        cout << "Leap year "<< endl;
    }
    else if(year % 400 != 0)             // if year is not divisible by 400, then its a common year
    {
        cout << "Common year "<< endl;
    }
    
    else                                 // for everything else, its a common year
    {
        cout << "Leap year "<< endl;
    }
    return 0;
}



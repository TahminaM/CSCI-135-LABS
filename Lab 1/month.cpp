/******************************************************************************
Link to LAB 1: https://maryash.github.io/135/labs/lab_01.html
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Yesmin Hasan
Assignment: Lab_1D.
This program asks the  user to input the year and the months (1-12) and prints the number of days in that months ( taking into account leap years) without using switch case and arrays

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter year: " ;
    cin >> year;
    int month;
    cout << "Enter month: " ;
    cin >> month;
    
    if(month == 2)                                     // we need to check if its a leap year or common year
    
    {
        if(year % 4 != 0)                              // if year is not divisible by 4, then its a common year 
        {
            cout << "28 Days "<< endl;
        }
        else if (year % 100 != 0)                      // if year is not divisible by 100, then its a Leap year
        {     
            cout << "29 Days "<< endl;
        }          
        else if(year % 400 != 0)                       // if year is not divisible by 400, then its a common year
        {
            cout << "28 Days "<< endl;
        }
        else                                            // for everything else, its a common year
        {
            cout << "29 Days "<< endl;
        }
    }
    
    else if (month == 4 or month == 6 or month == 9 or month==11)
    {
        cout << "30 Days "<< endl;
    }
    else  
    {
        cout << "31 Days "<< endl;
    }  
    return 0;
}


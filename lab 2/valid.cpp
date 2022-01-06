// Name: Tahmina Akther Munni
// course: CSCI 135 
// Assignment: Lab 2A
// Instructor: Tong yi
// Email: Tahmina.munni49@myhunter.cuny.edu
// This program promts for a valid input(0<n<100) and prints out the square of that number.

#include <iostream>
using namespace std;

int main()
{
    int num ;                                         // Define Variable
    cout << "Enter a number ";                       //enter an input number
    cin >> num;


    
    while ( num<=0 || num>=100 )                      //num is valid only when it is 0<n<100 
                                                      //while(!(0 < number && number < 100))
                                                      //set the while loop as to test the invalid number
    {
        cout << "please enter a valid number: ";      // Keep asking for a valid number until it is not entered
        cin >> num;
    } 



    cout << "Number square is: " << num * num << endl; // this line prints the square of that number when the valid number entered
 
    return 0;
} 


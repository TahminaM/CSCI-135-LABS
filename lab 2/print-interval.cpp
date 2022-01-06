// Name: Tahmina Akther Munni
// course: CSCI 135 
// Assignment: Lab 2B
// Instructor: Tong yi
// Email: Tahmina.munni49@myhunter.cuny.edu
// This program promts for an upper bound and lower integer number and prints out all the number includes lower bound but exclude lower bound

#include <iostream>
using namespace std;

int main()
{
    int upper,lower;
    cout << "Enter a lower bound number: "; //input a lower bound number
    cin >> lower;
    cout << "Enter an upper bound number: "; //input a upper bound number
    cin >> upper;
 
    for ( int i=lower; i<upper; i++) //i-is index that jumps to numbers one by one,i++ is i=i+1
                                      // i includes lower bound # from input but exclude upper bound# (Lower <= i < Upper) 
    {
        cout << i << " ";
    }
 
   cout << endl;

   return 0;
}

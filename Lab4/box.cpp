/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab_4A.
This program asks the  user to input width and height and prints a solid rectangular box of the requested size using asterisks.
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int width, height;
    cout << " Enter width: "<< endl;
    cin >> width;
    cout << " Enter height: "<< endl;
    cin >> height;
    
    for (int row=0; row<height; row++) // do this height times (nested for loops)
    {
        for (int col=0; col<width; col++)// print out a line of width stars
        {
            cout<< "*";
        }
        cout << endl;
    }
    
    return 0;
}

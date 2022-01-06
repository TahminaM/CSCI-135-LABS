/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab_4B.
This program asks the  user to input width and height and prints a rectangular checkerboard of the requested size using asterisks and spaces (alternating).
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
        for (int col=0; col<width; col++)
            if ( (row+col)%2 ==0) //when row/col are even or odd at the same time
                {
                    cout << "*";
                }
            else{
                    cout << " ";
            }    
        
        cout << endl;
    }
    
    return 0;
}

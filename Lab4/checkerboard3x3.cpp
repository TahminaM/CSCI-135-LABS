/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab_4G.
This program that asks the user to input width and height and prints a checkerboard of 3-by-3 squares. (It should work even if the input dimensions are not a multiple of three.)


*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
   int width, height;
   cout << "Input width: "<< endl;
   cin >> width;
   cout << "Input height: "<< endl;
   cin >> height;
   
   for (int row=0; row<height; row++) // do this height times (nested for loops)
    {
        for (int col=0; col<width; col++)
            if ( (row/3 + col/3 ) %2 == 0) //when row/col are even or odd at the same time
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

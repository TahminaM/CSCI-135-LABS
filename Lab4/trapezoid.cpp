/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab_4F.
This program that prints an upside-down trapezoid of given width and height.

However, if the input height is impossibly large for the given width, then the program should report, Impossible shape!




*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
   int width, height;
   cout << "Input width: "<< endl;
   cin >> width;
   cout << "Input height: "<< endl;
   cin >> height;
   
   int spaces = 0,stars = width;
   //formula for impossible case
   if(width-height < width/2){
           cout<<"Impossible shape\n";
   }
   else{        // For This part following given instruction
           for(int row=0; row<height; row++){      //Do this for every lines
           
               for(int col=0; col<spaces; col++){ 
                   cout<<" ";    //On each line, print the number of spaces
               }
               for(int col=0; col<stars; col++){ 
                   cout<<"*";    //On each line, print the number of stars
               } 
               cout << endl;
               spaces += 1;
               stars -= 2;
           }
        }       
   
   return 0;

}

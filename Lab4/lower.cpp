/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab_4D.
This program that prints the bottom-left half of a square, given the side length.


*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
   int size;
   cout << "Input size: "<< endl;
   cin >> size;
   for(int row = 0; row < size; row++) {            // do this height times (nested for loops)
       for(int col = 0; col < size; col++) {       // do this width times 
           if(col <= row) {     //when size=3 //col<=row..{(0,0)}{(1,0)(1,1)}{(2,0)(2,1)(2,2)}
               cout << "*";                      
           } else {
               cout << " ";
           }
       }
       cout << endl;
   }
   return 0;
}


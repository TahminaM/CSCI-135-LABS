/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab_4C.
This program asks the user to input the shape size, and prints a diagonal cross of that dimension.
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
   int size;
   cout << "Input size: "<< endl;
   cin >> size;
   for(int row = 0; row < size; row++) {            // do this height times (nested for loops)
       for(int col = 0; col < size; col++) {       // do this width times 
           if(row == col || row+col == size-1) {  //when size=5 //row==col{(0,0)(1,1)(2,2)(3,3)(4,4)}
               cout << "*";                      //or row+col==size-1{(0,4)(1'3)(2,2)(3,1)(4,0)}
           } else {
               cout << " ";
           }
       }
       cout << endl;
   }
   return 0;
}


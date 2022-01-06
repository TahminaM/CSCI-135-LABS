// Name: Tahmina Akther Munni
// course: CSCI 135 
// Assignment: Lab 2D
// Instructor: Tong yi
// Email: Tahmina.munni49@myhunter.cuny.edu
// This program prints fibonaccio numbers and those numbers becomes too big,bigger than int type can handle then we have to use long instead of int

#include <iostream>
using namespace std;

int main()
{ 
    int fib [60]; // make an array size 60
    fib[0] = 0;
    fib[1] = 1;   // first two terms are given
    cout << fib[0] << endl << fib[1] << endl;  //print out first two fibonaccio sequence
    
    for ( int i=2; i<60; i++)  // starting from index 2 as first two terms (0,1) are given
    {
        fib[i] = fib[i-1] + fib[i-2];  //set fibonaccio theory (start) i=2; (step) fib[2] = fib[1]+fib[0]; this loop continues until it reaches to (stop) 59
                                              
        cout << fib[i] << endl; // prints values of all fibonaccio sequence.
    }
           
	return 0;				

}


/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, 
Assignment: Lab_5B
Write a program numbers.cpp that defines a function**********************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

bool isDivisibleBy(int n,int d);
bool isPrime(int n);
int main()
{
    cout <<  isPrime(-13) <<endl;
    cout <<  isPrime(3)  <<endl;
    cout <<  isPrime(10) <<endl;
    cout <<  isPrime(156006432)<<endl;

}
//function defination (declare)

bool isPrime(int n)
{
    if(n<2) 
    {
        return false;      //if you detect that n is divisible by any number within the range you can stop the function
    }                      // have to check negative numbers  < 2 before everything else

    for(int i=2; i <= sqrt(n); i++)   //if it is a big number we only need to go to the <= sqrt of that number 
    {
        if(isDivisibleBy(n,i) )
        {
    	return false; 
        }
    }    
                       //we want to return a final value without any conditions means return fro everything else
     return true;    //if it never returns false inside the loop, that means its true
                  //make sure to return something at the end thus prevent odd behavior        

}
bool isDivisibleBy(int n, int d)
{
    if(d == 0)
    {           
        return false ;  //if d==0 happens the function ends right there,if it doesn't happen the function will go here. thsts why we don,t need an else if or else here, else doesn't go with return
    }
    if(n%d == 0)
    {
	    return true; 
    }
                   //we want to return a final value without any conditions means return fro everything else
    return false;
                  //make sure to return something at the end thus prevent odd behavior        

}

/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab_5C
Write a program numbers.cpp Add a function int nextPrime(int n);that returns the smallest prime greater than n.
**********************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

bool isDivisibleBy(int n,int d);
bool isPrime(int n);
int nextPrime(int n);
int main()
{ 
    
    cout << nextPrime(3)  <<endl;
    cout <<  nextPrime(17) <<endl;
    cout <<  nextPrime(156006432)<<endl;
    

}
                            //function defination (declare)
int nextPrime(int n){
        n++;                   //Increment n one by one untill you found a prime , this is to avoid the case that n also a prime nuber
        while(!isPrime(n)){
                n++;          //while n is not a prime keep incrementing n by 1
        }
        return n;       //while loop stop when n is prime
}



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
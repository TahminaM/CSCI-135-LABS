/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, 
Assignment: Lab_5D
Write a program numbers.cpp Add a function int countPrimes(int a, int b); that returns the number of prime numbers in the interval a ≤ x ≤ b.
********************************************************/
#include <iostream>
#include <cmath>
using namespace std;

bool isDivisibleBy(int n,int d);
bool isPrime(int n);
int nextPrime(int n);
int countPrimes(int a, int b);

int main()
{ 
    
    cout << countPrimes(3, 13)  <<endl;
    cout <<  countPrimes(17,23) <<endl;
    cout <<  countPrimes(1560, 20000)<<endl;
    

}
                            //function defination (declare)
int countPrimes(int a, int b){
        int counter = 0;
        for (int i=a; i<=b; i++){
                if(isPrime(i)){
                        counter++;   //if you found a prime increment counter by 1
                }
        }
        return counter;
}


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

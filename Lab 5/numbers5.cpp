/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, 
Assignment: Lab_5E
A prime number N is called a twin prime if either N-2 or N+2 (or both of them) is also a prime.
For example, a prime 17 is a twin prime, because 17+2 = 19 is a prime as well.
The first few twin primes are: 3, 5, 7, 11, 13, 17, 19, 29, 31 …
Add a function
bool isTwinPrime(int n);
that determines whether or not its argument is a twin prime. Change the main function to test the new code.
****************************************************/
#include <iostream>
#include <cmath>
using namespace std;

bool isDivisibleBy(int n,int d);
bool isPrime(int n);
int nextPrime(int n);
int countPrimes(int a, int b);
bool isTwinPrime(int n);

int main()
{ 
    
    cout << isTwinPrime(1)  <<endl;
    cout <<  isTwinPrime(13) <<endl;
    cout <<  isTwinPrime(1002)<<endl;
    

}
                            //function defination (declare)
                            
bool isTwinPrime(int n){
        //if( isPrime(n) && (isPrime(n-2)) || (isPrime(n+2))){
               // return true;
       // } 
        
        //otherwise
        return (( isPrime(n)) && (isPrime(n-2))) || (( isPrime(n)) && (isPrime(n+2))); //Advance way of doing the same thing
}

                            
                            
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

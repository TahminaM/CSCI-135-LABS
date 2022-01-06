/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab_5A
Write a program numbers.cpp that defines a function**********************************************************************/
#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d);
int main()
{
    cout <<  isDivisibleBy(9,0) <<endl;
    cout <<  isDivisibleBy(9,5) <<endl;
    cout <<  isDivisibleBy(9,3) <<endl;


}
//function defination (declare)
bool isDivisibleBy(int n, int d)
{
    if(d == 0)
    {
        return false;//if d==0 happens the function ends right there,if it doesn't happen the function will go here. thsts why we don,t need an else if or else here, else doesn't go with return
    }
    if(n%d == 0)
    {
	return true; 
    }
    //we want to return a final value without any conditions means return fro everything else
    return false;
                  //make sure to return something at the end thus prevent odd behavior        

}

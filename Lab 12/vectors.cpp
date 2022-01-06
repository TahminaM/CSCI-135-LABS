/******************************************************************************

 Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab 12 A
Description:program a function called vector<int> makeVector(int n) that returns a vector of n integers that range from 0 to n-1. Call your program vectors.cpp. Your function must be implemented outside the main function and must return a vector.


*******************************************************************************/
#include <iostream>
#include <vector>//include vector liabrary

using namespace std;

vector<int> makeVector(int n){
   vector<int> v;
   for(int i = 0;i<n;i++){//loop for push back
      v.push_back(i);
   }  
   return v;
}

int main()
{
   int n;
   cout<<"Enter value for n: ";//enter value
   cin>>n;
   
   vector<int> v = makeVector(n);
   
   for(int i = 0;i<n;i++){
      cout<<v[i]<<endl;
   }
   
   return 0;
}
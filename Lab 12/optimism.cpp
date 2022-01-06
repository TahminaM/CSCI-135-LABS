/******************************************************************************

 Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab 12 B
Description:a program called optimism.cpp that implements the function vector<int> goodVibes(const & vector<int> v); that, given a vector of integers, returns a vector with only the positive integers in the same order.

vector<int> v{1,2,-1,3,4,-1,6};
goodVibes(v); // returns [1,2,3,4,6]

*******************************************************************************/
#include <iostream>
#include <vector>//vector liabrary
using namespace std;

//part b 
//implements the function vector<int> without const

vector<int> goodVibes ( vector<int>  v)
{
    vector<int> positive;//go through input vector V
      
    for (int i = 0; i < v.size(); i++) {
        if(v[i]>0)
        positive.push_back(v[i]);
        }
      
    return positive;
}


int main()
{
    vector<int> v {1,2,3,-8,-6,9,-4};
    
    v= goodVibes(v);    //return 1,2,3,9 removes all negative values
    
    for (int i=0; i<v.size(); i++){
        cout << v[i] <<" ";
    }
    
    cout<<endl;

}


/******************************************************************************

Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab 12 c
Description:Make a program called fusion.cpp that implements the 
function void gogeta(vector<int> &goku, vector<int> &vegeta) that appends elements of the second vector 
into the first and empties the second vector. 
*******************************************************************************/
#include <iostream>
#include <vector>//vector liabrary
using namespace std;

//part c //v1= 1,1 //v2=2,2,2 //sum=3,3,2

void gogeta(vector<int> &goku, vector<int> &vegeta)
{
for (int i = 0; i < vegeta.size(); i++) { //returning nothing
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();//clear 2nd vactor
}


int main()
{
vector<int> v1 {1,2,3};
vector<int> v2{2,4};

gogeta(v1, v2);//V1 is now 1,2,3,2,4 and v2 is empty
  
for (int i = 0; i < v1.size(); i++) {// printing v1
    cout<<v1[i]<<" ";
    }
  
cout<<endl;

}


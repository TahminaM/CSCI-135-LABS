/******************************************************************************

Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab 12 D
Description:program called pairwise.cpp that implements the function vector<int> sumPairWise(const vector<int> &v1, 
const vector<int> &v2) that returns a vector of integers whose elements are the pairwise sum of the elements from the two vectors passed as arguments.
If a vector has a smaller size than the other, 
consider extra entries from the shorter vectors as 0.


*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

vector<int> sumPairWise(vector<int> &v1, vector<int> &v2){ //copied from lab 12
    vector<int> res;
    int sum;
    for(int i = 0;i<v1.size() || i<v2.size();i++){
        sum = 0;
        if(i<v1.size()){
            sum += v1[i];
        }
        if(i<v2.size()){
            sum += v2[i];
        }
        res.push_back(sum);
    }
    return res;
}

int main(){
   vector<int> v1{2,2,4};
    vector<int> v2{1,5};

    vector<int> res = sumPairWise(v1, v2); // returns [3, 7, 4]
    
    for(int i = 0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;

   return 0;
}
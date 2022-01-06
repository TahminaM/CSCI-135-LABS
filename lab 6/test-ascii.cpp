/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, 
Assignment: Lab_6A
Program test-ascii.cpp that asks the user to input a line of text (which may possibly include spaces). The program reports all characters from the input line together with their ASCII codes.
And print exactly one space between the character and it’s code.
*******************************************************************************/
#include <iostream>
#include <cctype> //contains many usefull function for char typede
#include <string> //for string type
using namespace std;


int main()
{
    string s;
    getline(cin,s); //getline to read string input which can include a space 
    for(int i=0; i<s.size(); i++){
            cout<< s[i] << " " << (int) s[i]  << endl;
    }  //s is a string and s[i] is a char
    
    

    return 0;
}

/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab 13 E
Description:

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

bool nestedParens(string s)
{
// base case: When empty string comes, accepting
if(s.length() == 0)
return true;
  
// calling recursively only if the first and last are braces
// calling recursively without first and last characters
if(s[0]=='(' && s[s.length()-1] == ')')
return nestedParens(s.substr(1,s.length()-2));
  
// otherwise returning false
return false;
}

int main() {
cout << boolalpha << nestedParens("((()))")<<endl;
cout << nestedParens("()")<<endl;
cout << nestedParens("")<<endl;
cout << nestedParens("(((")<<endl;
cout << nestedParens("(()")<<endl;
cout << nestedParens(")(")<<endl;
cout << nestedParens("a(b)c")<<endl;
}


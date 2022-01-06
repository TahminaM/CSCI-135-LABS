/******************************************************************************

Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab_7A'  
program unindent.cpp that reads input from cin and prints out each input line with leading spaces removed.
*******************************************************************************/
#include <iostream>
#include <cctype>
using namespace std; //setup 

string removeLeadingSpaces(string line){
  int i = 0; //get index of first non-space character
  
  while (isspace(line[i])){ //loop ends when line i is a nonspace character

    i++;
  }
  return line.substr(i); //retrun the line at the first non-space character
}

int main(){
  string line;
  while(getline(cin, line)){
    cout << removeLeadingSpaces(line) << endl;
  }
}
/******************************************************************************

Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab_7B
program unindent.cpp that reads input from cin and prints out each input line with leading spaces removed.
*******************************************************************************/
#include <iostream>
using namespace std; 

string removeLeadingSpaces(string line) {
    int i = 0;
    while (isspace(line[i])) {
        i++; 
    }
    return line.substr(i); 
}

int countChar(string line, char c) {  //count character c in the line how many times appeaer in the line
    int count = 0; 
    
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == c) {
            count++;
        }
    }
    return count;
}

void printLine(string line, int indent) {  //count character c in the line how many times appeaer in the line
    for (int i = 0; i < indent; i++) {
        cout << '\t';
    }
    cout << line << endl;
}

int main() {
    string line;// define variable
    int open = 0;
    while (getline(cin, line)) {// read line
        line = removeLeadingSpaces(line);
        if (line[0] == '}') {
            printLine(line, open - 1);
        }
        else {// else
            printLine(line, open);
        }
        open += countChar(line, '{') - countChar(line, '}');
    }
    return 0;
}
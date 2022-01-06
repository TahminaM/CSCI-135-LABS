/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab_6C
a program vigenere.cpp. It should contain a function encryptVigenere implementing this cipher:
string encryptVigenere(string plaintext, string keyword);
You may assume that the keyword contains only lowercase alphabetic characters a - z.
The main should implement a testing interface similar to the one in Task B, the user enters the plaintext and the keyword, and the program reports the ciphertext.
******************************************************************************/

#include <iostream>
#include <cctype> //contains many usefull function for "char" type
#include <string> //for string type
using namespace std;

//function prototype
// A helper function to shift one character by rshift
char shiftChar(char c, int rshift);
string encryptVigenere(string plaintext, string keyword);


int main()
{
    cout<<encryptVigenere("Hello, World!","cake")<< endl;
    return 0;
}



// Caesar cipher encryption
string encryptVigenere(string plaintext, string keyword){
        string ciphertext;            //after declaring a string it's always empty
        int j=0;               
        for (int i=0; i<plaintext.size();i++){  //we will build up the cipertext character by character by converting character from plain text
                if(isalpha(plaintext[i])){
                                                              //if the character is alphabetical isalpha(c)
                        ciphertext +=shiftChar(plaintext[i],keyword[j]-'a');  
                        j++;
                }
                //if the charaacter is not alphabetical
                else{
                        ciphertext += plaintext[i];    
                }
                if(j== keyword.size()){
                        j=0;//reset the first index j back to zero the first character 
                }
        }
        return ciphertext;
}



// A helper function to shift one character by rshift
char shiftChar(char c, int rshift){                     //deal with wrap around problem
        if (isupper(c)){                           //upper case
                return (c-'A'+rshift)%26 +'A'; //26 alphabet
                                                //c-A &c-a is a technique to convert charachter c from ASCII code to alphabetical order.
        }                                      // 'A'=67,if c=='B'=68, 'B'-'A'=1 .if we indexed the alphabet (0='A',1='B'...25='Z')
        if (islower(c)){        //lower case
                return (c-'a'+rshift)%26 +'a';
        }
        return c;   //for (everything else) non alphabetic character left unchanged 
                  // we don't use else here
                  
}





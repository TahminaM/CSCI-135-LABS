/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, 
Assignment: Lab_6B
 The main function should ask the user to input a plaintext sentence, then enter the right shift, and report the ciphertext computed using your encryption function.


*******************************************************************************/

#include <iostream>
#include <cctype> //contains many usefull function for "char" type
#include <string> //for string type
using namespace std;

//function prototype
// A helper function to shift one character by rshift
char shiftChar(char c, int rshift);

// Caesar cipher encryption
string encryptCaesar(string plaintext, int rshift);

int main()
{
    cout<< encryptCaesar("Way to Go!", 5) <<endl;
    return 0;
}
// Caesar cipher encryption
string encryptCaesar(string plaintext, int rshift){
        string ciphertext;            //after declaring a string it's always empty
        for (int i=0; i<plaintext.size();i++){  //we will build up the cipertext character by character 
                ciphertext +=shiftChar(plaintext[i],rshift);  //by converting character from plain text
        }
        return ciphertext;
}

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift){                     //deal with wrap around problem
        if (isupper(c)){                           //upper case
                return (c-'A'+rshift)%26 +'A'; //26 alphabet; %26 to deal with wrap around
                                                //c-A &c-a is a technique to convert charachter c from ASCII code to alphabetical order.
        }                                      // 'A'=67,if c=='B'=68, 'B'-'A'=1 .if we indexed the alphabet (0='A',1='B'...25='Z')
        if (islower(c)){        //lower case
                return (c-'a'+rshift)%26 +'a';
        }
        return c;   //for (everything else) non alphabetic character left unchanged 
                  // we don't use else here
                  
}




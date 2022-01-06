/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab_6D
a program decryption.cpp that uses the above functions to demonstrate encryption and decryption for both ciphers.
*****************************************************************************/

#include <iostream>
#include <cctype> //contains many usefull function for "char" type
#include <string> //for string type
using namespace std;


 //encryption
char shiftChar(char character, int rShift) // A helper function to shift one character by rshift
{
if(character >= 'A' && character <= 'Z')
{
character = 'A' + (character - 'A' + rShift + 26) %26;
}
if(character >= 'a' && character <= 'z')
{
character = 'a' + (character-'a' + rShift + 26) %26;
}

return character;

}

// decryption
char shiftCharDecrypt(char character, int rShift)
{
if(character >= 'A' && character <= 'Z')
{
character = 'A' + (character - 'A' - rShift + 26) %26;
}
if(character >= 'a' && character <= 'z')
{
character = 'a' + (character-'a' - rShift + 26) %26;
}
return character;
}

string encryptCaesar(string userInput, int rShift)// Caesar cipher encryption
{
string endResult = "";
char character;
for(int i = 0; i < userInput.length(); ++i)
{
endResult += shiftChar(userInput[i], rShift);
}
return endResult;
}


string decryptCaesar(string cipherText, int rShift)
{
string endResult = "";
char character;
for(int i = 0; i < cipherText.length(); ++i)
{
endResult += shiftCharDecrypt(cipherText[i], rShift);
}
return endResult;
}

// Vigenere encryption
string encryptVigenere(string textPlain, string keyword)
{
string endResult = "";

char character;
int ind = 0, encryptionKey;

//Starting our nested if loops inside a for loop.
for(int k = 0; k < textPlain.length(); ++k)
{
character = textPlain[k];
  
if(character >= 'A' && character <= 'Z')
{
encryptionKey = keyword[ind] - 'a';
ind = (ind + 1) % keyword.length();
character = 'A' + (character - 'A' + encryptionKey + 26) %26;
}
if(character >= 'a' && character <= 'z')
{
encryptionKey = keyword[ind] - 'a';
ind = (ind + 1) % keyword.length();
character = 'a' + (character - 'a' + encryptionKey + 26) %26;
}
endResult += character;
}
return endResult;

}

string decryptVigenere(string cipherText, string keyword)
{
string endResult = "";

char character;
int ind = 0, decryptionKey;

for(int k = 0; k < cipherText.length(); ++k)
{
character = cipherText[k];
  
if(character >= 'A' && character <= 'Z')
{
decryptionKey = keyword[ind] - 'a';
ind = (ind + 1) % keyword.length();
character = 'A' + (character - 'A' - decryptionKey + 26) %26;
}
if(character >= 'a' && character <= 'z')
{
decryptionKey = keyword[ind] - 'a';
ind = (ind + 1) % keyword.length();
character = 'a' + (character - 'a' - decryptionKey + 26) %26;
}
endResult += character;
}
return endResult;
  
}
int main()
{
string plainText;
cout << "Enter plaintext: ";
  
getline(cin, plainText);

string choice;
// using cout 
cout<<"choose from below to proceed :-\n";
cout<<"caesar : to apply caesar cipher encryption-decryption\n";
cout<<"vigenere : to apply vigenere algo encryption-decryption\n";

cin>>choice;

if(choice == "caesar")
{
int encryptionKey;
  
cout << "Enter shift : ";
cin >> encryptionKey;
  
cout << "Ciphertext : " << encryptCaesar(plainText, encryptionKey) << endl;
cout<<"Decrypted :- "<<decryptCaesar(encryptCaesar(plainText,encryptionKey), encryptionKey) << endl;
}
// else statement
else
{
string encryptionKey;
  //final step
cout << "Enter keyword: ";
cin >> encryptionKey;
  
cout << "Ciphertext: " << encryptVigenere(plainText, encryptionKey) << endl;   

cout<<"Decrypted :- "<<decryptVigenere(encryptVigenere(plainText,encryptionKey), encryptionKey) << endl;
}
  
  
}

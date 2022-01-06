/******************************************************************************
Name:Tahmina Akther Munni
Email: Tahmina.munni49@myhunter.cuny.edu
Course: CSCI 135
Professor: Tong ye 
This Program finds the minimum and maximum storage in East basin in 2018.
 

*******************************************************************************/
#include <fstream>
#include <cstdlib>
#include <climits>
#include <bits/stdc++.h> // for INT_MIN and INT_MAX
#include <iostream>
using namespace std;


int main()
{
    
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) 
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }
    string junk;        // new string variable
    getline(fin, junk); // read one line from the file 
    
    //work start here
    string date, in_date;
    double eastSt , eastEl, westSt, westEl, min, max ;
    min = INT_MAX;     //INT_MAX is the maximum of int type represents a very big value
    max = INT_MIN;   //INT_MIN is the minimum of int type represents a very small value
                     // setting it opposite so we can update it later on, if we assign a small value to min it will never be updated
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) // this loop reads the file line-by-line
                                       // extracting 5 values on each iteration 
    { 
        
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                              //ignorring the remaining columns 
                              //keep track of the current min/max
        
        if( eastSt < min )   //if this happens we have a new min value
        {
            min = eastSt;   // update it with new min
        }
        
        if( eastSt > max )   //if this happens we have a new max value
        {
            max = eastSt;   // update it with new max
        }
        
        
    } 
    cout << "Min: "<< min << endl; //cout after while loop as we want only one min value
    cout << "Max: "<< max << endl; //cout after while loop as we want only one max value

    //work end here
           
    fin.close();
    

    return 0;
}

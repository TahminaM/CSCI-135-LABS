/******************************************************************************
Name:Tahmina Akther Munni
Email: Tahmina.munni49@myhunter.cuny.edu
Course: CSCI 135
Professor: Tong ye 
This Program asks the user to input two dates (the beginning and the end of the interval). The program should check each day in the interval and report which basin had higher elevation on that day by printing “East” or “West”, or print “Equal” if both basins are at the same le

*******************************************************************************/
#include <fstream>
#include <cstdlib>
#include <climits>
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
    
    double eastSt , eastEl, westSt, westEl ;
    string date, sdate, edate;
    
    cout << "Enter start date: "; //enter start date for comparision
    cin >> sdate;
    cout << "Enter edate date: "; //enter end date for comparision
    cin >> edate;
    
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) // this loop reads the file line-by-line
                                       // extracting 5 values on each iteration 
    { 
        
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                              //ignorring the remaining columns 
                              
        
        if( date >= sdate && date <= edate ) // when date is between start date and end date
        {
            
            if (eastEl < westEl)
                                                                                                                             {
                cout << date << "  West "<< endl;
            }
            else if (eastEl > westEl)
            {
                cout << date << "  East "<< endl;
            }
            else 
            {
                cout << date << "  Equal "<< endl;
            }
            
        }
        
        
    } 

    //work end here
           
    fin.close();
    

    return 0;   
}

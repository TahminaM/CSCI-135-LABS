/******************************************************************************
Name:Tahmina Akther Munni
Email: Tahmina.munni49@myhunter.cuny.edu
Course: CSCI 135
Professor: Tong ye 
This Program asks the user to input a string representing the date (in MM/DD/YYYY format), and prints out the East basin storage on that day.
Example

*******************************************************************************/
#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>
using namespace std;


int main()
{
    
    ifstream fin("Current_Reservoir_Levels.tsv"); //read in the file
    if (fin.fail()) 
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }
    string junk;        // new string variable
    getline(fin, junk); // read one line from the file
    
    //work start here
    double eastSt , eastEl, westSt, westEl;
    string date, in_date;
    cout<< "Enter a date: ";
    cin>> in_date;
    
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) // this loop reads the file line-by-line
                                                            // extracting 5 values on each iteration
    {
        fin.ignore(INT_MAX, '\n'); //skips to the end of line,
                              //ignorring the remaining columns 
        if (in_date == date) //there is only one similler date
        {
            cout << "East basin storage "<< eastSt << " billion gallons."<< endl; // for example, to print the date and East basin storage:
            break; //stop the loop when we found that date to save resources
        }
    } //work end here
           
    fin.close();
    

    return 0;
}


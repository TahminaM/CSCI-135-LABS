/******************************************************************************
Name:Tahmina Akther Munni
Email: Tahmina.munni49@myhunter.cuny.edu
Course: CSCI 135
Professor: Tong ye 
This Program asks the user to input two dates (earlier date then later date). The program should report the West basin elevation for all days in the interval in the reverse chronological order (from the later date to the earlier).
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
    
    double eastSt , eastEl, westSt, westEl, westEl_arr[366] ;
    string date, sdate, edate, date_arr[366];
    int index=0;
    
    cout << "Enter start date: "; //enter start date for comparision
    cin >> sdate;
    cout << "Enter edate date: "; //enter end date for comparision
    cin >> edate;
    
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) // this loop reads the file line-by-line
                                       // extracting 5 values on each iteration 
    { 
        
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                              //ignorring the remaining columns 
                              
        if ( date >= sdate && date <= edate)
        {
            date_arr [index] = date;// date has multiple value than sdate and edate
            westEl_arr[index] = westEl;
            index++;         // index will go up inside the loop and reach to the end
        
        }
        
    } 
    //cout << index << endl; can be use to check index   // print out in reversal chronological order
    for (int i = index-1; i>=0; i--)  // for loop will start from the last index(found from inside loop) and will go backward
    {                                 // index-1 is last value and 0 is the first value going backward
        cout << date_arr[i] << "  " << westEl_arr[i] << " ft"<< endl;
    }
    
    
    //work end here
           
    fin.close();
    

    return 0;
}


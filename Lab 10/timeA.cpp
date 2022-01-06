/******************************************************************************

Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi
Assignment: LAb 10 A
Description:
The first function should return the number of minutes from 0:00AM until time.
The second function should receive two Time arguments earlier and later and report how many minutes separate the two moments. 

*******************************************************************************/
#include <iostream>
using namespace std;

class Time { 
public:
    int h;
    int m;
};

//Task A
int minutesSinceMidnight(Time time){
    int num_of_mins= time.h*60 + time.m;
    return num_of_mins;
}
int minutesUntil(Time earlier, Time later){
    int num_of_mins = ( later.h-earlier.h)*60 + (later.m-earlier.m);
    return num_of_mins;
    
}
//convert hours to minutes, if h==2, 2*60=120, add mins(m==23,120+23=143)
//Take our earlier mins past midnight, and then later MPM and find differece

int main()
{
    //Task A
    Time time1,time2;
    
    cout << " enter first time ( hour then minute): "<< endl;
    cin >> time1.h >>time1.m;
    cout << " enter the second time ( hour then minute): "<< endl;
    cin >> time2.h >>time2.m;   
    
    cout << "Number of minutes between"<<time1.h << ":" <<time1.m << "and 00:00 is "<< minutesSinceMidnight(time1)<< endl;
    cout << "Number of minutes between"<<time2.h << ":" <<time2.m << "and 00:00 is "<< minutesUntil(time1,time2)<< endl;

    return 0;
}

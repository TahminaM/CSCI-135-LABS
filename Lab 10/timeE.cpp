/******************************************************************************

Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi
Assignment: LAb 10 E
Description:
The first function should return the number of minutes from 0:00AM until time.
The second function should receive two Time arguments earlier and later and report how many minutes separate the two moments. 
C: The function should create and return a new moment of time that is min minutes after time0
D: The function should produce and return a new TimeSlot for the movie nextMovie, scheduled immediately after the time slot ts.
E: The function should return true if the two time slots overlap, otherwise return false
*******************************************************************************/
#include <iostream>
using namespace std;

class Time { 
public:
    int h;
    int m;
};
//Part C,D,E coppied from the instruction
enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};


class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

//Task A
int minutesSinceMidnight(Time time){
    int num_of_mins= time.h*60 + time.m;
    return num_of_mins;
}

//Part: B 

Time addMinutes(Time time0, int min){
    Time new_time;
    new_time.h = time0.h + (time0.m + min)/60;
    new_time.m = (time0.m + min) % 60;
    return new_time;
    
}
//Part C copied from instruction
void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

//Part C 

void printTimeSlot(TimeSlot ts){
    Time endingTime = addMinutes(ts.startTime, ts.movie.duration);
    printMovie(ts. movie);
    
    //print out second part which is the starting Time and ending Time
    cout<< " [starts at "<< ts.startTime.h<< ":" << ts.startTime.m
    <<", ends by "<< endingTime.h<<":"<<endingTime.m<<"] "<<endl;
    
    
    
}

//Part D 
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    TimeSlot nextTimeSlot;//nextTimeSlot is TimeSlottype,we have to determine  its 2 memberrs
    //What movie?
    nextTimeSlot.movie = nextMovie;
    //start time of nextTimeSlot.
    nextTimeSlot.startTime = addMinutes(ts.startTime, ts.movie.duration);
    return nextTimeSlot;
}

//Part E used second hint
bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
    //we need to make sure which one is earlier (ts1 or ts2)
    if (minutesSinceMidnight(ts1.startTime) < minutesSinceMidnight(ts2.startTime) ){
        return ts1.movie.duration > (minutesSinceMidnight(ts2.startTime) - minutesSinceMidnight (ts1.startTime));
    }
    else{
        return ts2.movie.duration > (minutesSinceMidnight(ts1.startTime) - minutesSinceMidnight (ts2.startTime));
    }
    
    
}




int main()
{
    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};
    //Add two more slots
    Movie movie3 = {"Movie X", DRAMA, 180};
    Movie movie4 = {"Movie Z", ROMANCE, 200};
    
    TimeSlot morning = {movie1, {9, 15}};  
    TimeSlot daytime = {movie2, {12, 15}}; 
    TimeSlot evening = {movie3, {16, 45}};
    
    TimeSlot daytime2 = {movie3, {14, 26}};
    
    //Part E 
    cout<< timeOverlap(daytime, daytime2) << endl;
    
    //Add two more time slots
    TimeSlot afternoon = {movie4, {11, 15}};  
    TimeSlot late = {movie3, {12, 15}};
    
    //Part D 
    TimeSlot nextTimeSlot;
    nextTimeSlot = scheduleAfter(morning, movie2);
    printTimeSlot(nextTimeSlot);
    
    
    //Part c
    //Call function to print out the time slots
    printTimeSlot(morning);
    printTimeSlot(daytime);
    
    printTimeSlot(evening);
    printTimeSlot(late);
    
    
    
    
}

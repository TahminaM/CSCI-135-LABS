//Name: Tahmina Akther Munni
//Professor: Tong Yi
//CSCI 13500
//Lab 11 A
//write a program social.cpp, in which we have to implement the class Profile that can store the info about a user of the network.

#include <iostream>
#include <string>
using namespace std;

//file 1 Declaration:

class Profile {
private:
    string username;
    string displayname;
public:
                                      // Profile constructor for a user (initializing 
                                            // private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn);
                                         // Default Profile constructor (username="", displayname="")
    Profile();
                                            // Return username
    string getUsername();
                                           // Return name in the format: "displayname (@username)"
    string getFullName();
                                        // Change display name
    void setDisplayName(string dspn);
};

//File 2 Implementation:

Profile::Profile(string usrn, string dspn){ //paramiterised constructor
    username = usrn;
    displayname = dspn;
}

Profile::Profile(){  //Default constructor setting data member to the empty string
    username ="" ;
    displayname = "" ;
}

string Profile:: getUsername(){ //to get th username
    return username;
}

string Profile::getFullName(){ //
    return displayname + "(@" + username + ")"; //string concatenation
}


void Profile:: setDisplayName(string dspn){
    displayname =dspn;
}


//File 3 TESTING
int main() {
    Profile p1("marco", "Marco");    
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco (@marco)

    p1.setDisplayName("Marco Rossi"); 
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco Rossi (@marco)
    
    Profile p2("tarma1", "Tarma Roving");    
    cout << p2.getUsername() << endl; // tarma1
    cout << p2.getFullName() << endl; // Tarma Roving (@tarma1)
}

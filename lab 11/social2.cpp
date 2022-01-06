//Name: Tahmina Akther Munni
//Professor: Tong Yi
//CSCI 13500
//Lab 11 B
//Write a program social2.cpp, implementing the first version of the class Network
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

Profile::Profile(){ //Default constructor setting data member to the empty string
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
//Part b class declaration given:
class Network {
private:
  static const int MAX_USERS = 20; // max number of user profiles
  int numUsers;                    // number of registered users
  Profile profiles[MAX_USERS];     // user profiles array:
                                   // mapping integer ID -> Profile
                                    // Returns user ID (index in the 'profiles' array) by their username
                                    // (or -1 if username is not found)
  int findID (string usrn);
public:
                                        // Constructor, makes an empty network (numUsers = 0)
  Network();                  // Attempts to sign up a new user with specified username and displayname
                                    // return true if the operation was successful, otherwise return false
                                    
  bool addUser(string usrn, string dspn);
};

//Network function implementation:
int Network::findID(string usrn){
    for (int i=0; i< numUsers; i++){
        if (profiles[i].getUsername() == usrn){ //profile i is a profile
            return i;        //return ID which is arraay index of object
        }
    }
    return -1;      //if user name not found
}

Network :: Network(){ 
    numUsers = 0; //create initially empty Network
}

bool Network::addUser(string usrn, string dspn){ //username must contains text
    if(usrn == ""){
        return false;
    }    


                                //Network must have space and username must be unique
    if (numUsers < MAX_USERS && findID(usrn) == -1){
        for( int i=0; i< usrn.length(); i++){
            if(!isalnum(usrn[i])){                  //unique but not alpha numeric
                return false;             //not valid username
            }
        }
                           //if all condition are met add username
    
    Profile p(usrn, dspn);
    profiles[numUsers] = p;
    numUsers++;
    return true;

   }else{ 
    return false; //username exist or profiles[]at capacity
   }
}


//Testing B 
int main() {
  Network nw;
  cout << nw.addUser("mario", "Mario") << endl;     // true (1)
  cout << nw.addUser("luigi", "Luigi") << endl;     // true (1)

  cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
  cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
  cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)

  for(int i = 2; i < 20; i++)
      cout << nw.addUser("mario" + to_string(i), 
                 "Mario" + to_string(i)) << endl;   // true (1)

  cout << nw.addUser("yoshi", "Yoshi") << endl;     // false (0)
}



/*
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, 
Assignment: Lab_9 B 
Description:
   a function Which receives the coordinates of two points (passed as pointers), and returns the pointer of the point that is farther away from the origin.
*/
#include <iostream>
#include <cmath>
using namespace std;

 class Coord3D {  //declare Coord3D class (object) that represents coordinates in 3D
public:
    double x;
    double y;
    double z;
};
//Part A: calculate the length from a particular points P in 3D space using euclidean formula 

double length(Coord3D *p){
    
    double x = p->x; //double x=(*p).x
    double y = p->y; //double y=(*p).y
    double z = p->z; //double z=(*p).z
    
    
    return sqrt(x*x + y*y + z*z);
}

//Task B: length function determines the distanse from the origin

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    if (length(p1) > length (p2)){
        return p1;  //p1 is farther
    }else{
        return p2;
    }
}



int main() {
    //task A
    //Coord3D pointP = {10, 20, 30};
    //cout << length(&pointP) << endl; // would print 37.4166
    
    //task b
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};

    cout << "Address of P: " << &pointP << endl;
    cout << "Address of Q: " << &pointQ << endl << endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
    cout << "ans = " << ans << endl;
    
    
    
    
}

/*
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi 
Assignment: Lab_9 C
Description:
   a function length() that receives the coordinates of a point P passed as a pointer, 
    and computes the distance from the origin to the point P:
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

//Task C

void move(Coord3D *ppos, Coord3D *pvel, double dt){
    //need to update the x, y, z values of ppos 
    ppos ->x = ppos->x + pvel->x * dt;   //ppos ->x ==(* ppos).x
    ppos ->y = ppos->y + pvel->y * dt;
    ppos ->z = ppos->z + pvel->z * dt;

    
    
}



int main() {
    //task A
    //Coord3D pointP = {10, 20, 30};
    //cout << length(&pointP) << endl; // would print 37.4166
    
    //task b
    //Coord3D pointP = {10, 20, 30};
    //Coord3D pointQ = {-20, 21, -22};
    //cout << "Address of P: " << &pointP << endl;
    //cout << "Address of Q: " << &pointQ << endl << endl;
    //Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
    //cout << "ans = " << ans << endl;
    
    //task C
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // object pos gets changed
    cout << pos.x << " " << pos.y << " " << pos.z << endl;
    // prints: 2 -10 100.4
    
    
    
}

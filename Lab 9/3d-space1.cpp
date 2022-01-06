
/*
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, 
Assignment: Lab_9 A 
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
    return sqrt(pow(p->x,2) + pow(p->y,2) + pow(p->z,2));
}

int main() {
    Coord3D pointP = {10, 20, 30};
    cout << length(&pointP) << endl; // would print 37.4166
}
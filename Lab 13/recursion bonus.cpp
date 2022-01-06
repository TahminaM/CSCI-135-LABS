/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi
Assignment: Lab 13 F
Description:

*******************************************************************************/


#include <iostream>
using namespace std;

bool divisible(int *prices, int size);
bool solvable(int alice, int bob, int *prices, int size);

int main()
{
    int testcase1[] = {10, 15, 12, 18, 19, 17, 13, 35, 33 };
    int testcase2[] = {6, 4, 10};
    int testcase3[] = {6, 4, 9};

    bool res;

    cout << "\nTest case 1: {10, 15, 12, 18, 19, 17, 13, 35, 33 }\n";
    res = divisible(testcase1, 9);
    cout << "Result: divisible= " << res << "\n";

    cout << "\nTest case 2: {6, 4, 10}\n";
    res = divisible(testcase2, 3);
    cout << "Result: divisible= " << res << "\n";

    cout << "\nTest case 3: {6, 4, 9}\n";
    res = divisible(testcase3, 3);
    cout << "Result: divisible= " << res << "\n";
    return 0;
}

bool divisible(int *prices, int size)
{
    return solvable(0, 0, prices, size);
}

bool solvable(int alice, int bob, int *prices, int size)
{
    if(size == 0) //base case
    {
        return (alice == bob); // solvable if both sums are equal
    }
    //recursive case

    // assign current to alice
    if(solvable(alice + prices[0], bob, prices + 1, size - 1))
    {
        cout << prices[0] << ": Alice\n";
        return true;
    }
    //assign current to bob
    if(solvable(alice, bob + prices[0], prices + 1, size - 1))
    {
        cout << prices[0] << ": Bob\n";
        return true;
    }
    return false;
}
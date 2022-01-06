# CSCI-135
# https://maryash.github.io/135/2020_spring.html
# All the labs and homework

Task A. Find the smaller of two integers.
Write a program smaller.cpp that asks the user to input two integer numbers and prints out the smaller of the two.

Example
$ ./smaller
Enter the first number: 15
Enter the second number: -24

The smaller of the two is -24


Task B. Find the smaller of three integers.
Write a program smaller3.cpp that asks the user to input three integer numbers, and prints out the smallest of the three.

(Hint: There are many possible solutions here. One possible strategy: Given numbers x, y, and z, you can first compare x and y, take whichever is smaller and compare it with z.)

Example
$ ./smaller3
Enter the first number: 23
Enter the second number: 76
Enter the third number: 37
The smaller of the three is 23


Task C. A leap year or a common year?
Introducing the modulo operator %
In C++, operator % computes the remainder of the division of x by y. For example, 37 % 10 returns 7, because this is the remainder of 37 when divided by 10.

The task
Write a program leap.cpp that asks the user to input an integer representing a year number (1999, 2016, etc.). If the input year is a leap year according to the modern Gregorian calendar, it should print Leap year, otherwise, print Common year.

In the modern Gregorian calendar, a year is a leap year if it is divisible by 4, but century years are not leap years unless they are divisible by 400. Here is the pseudocode:

if (year is not divisible by 4) then (it is a common year)
else if (year is not divisible by 100) then (it is a leap year)
else if (year is not divisible by 400) then (it is a common year)
else (it is a leap year)

This means that 2012, 2016, 2020, and 2040 are all leap years.
However, the century years 1800, 1900, 2100, 2200, 2300 and 2500 are NOT.
Yet, 2000, 2400, 2800 are still leap years.

Example 1
$ ./leap
Enter year: 2016

Leap year
Example 2
$ ./leap
Enter year: 2017

Common year


Task D. Number of days in a given month
Write a program month.cpp that asks the user to input the year and the month (1-12) and prints the number of days in that month (taking into account leap years). You may not use switch case or arrays even if you know these language constructs.

Example
$ ./month
Enter year: 2017
Enter month: 5

31 days






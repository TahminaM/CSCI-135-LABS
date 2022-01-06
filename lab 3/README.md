# CSCI-135
# https://tong-yee.github.io/135/labs/lab_03.html

Task A
Write a program east-storage.cpp that asks the user to input a string representing the date (in MM/DD/YYYY format), and prints out the East basin storage on that day.

Example
$ ./east-storage
Enter date: 05/20/2018
East basin storage: 80.96 billion gallons
Task B. Minimum and maximum storage in 2018
Write a program minmax.cpp that finds the minimum and maximum storage in East basin in 2018.

Example (using made up numbers):
$ ./minmax
minimum storage in East basin: 59.88 billion gallons
MAXimum storage in East basin: 81.07 billion gallons
Hint:
The program should read the file line by line, while keeping track of what is the highest and the lowest storage level in the basin so far. In the end, after reading the entire file, the found values will be the minimum and the maximum storage levels for the entire year.

Task C. Comparing elevations
Write a program compare.cpp that asks the user to input two dates (the beginning and the end of the interval). The program should check each day in the interval and report which basin had higher elevation on that day by printing “East” or “West”, or print “Equal” if both basins are at the same level.

Example:
$ ./compare
Enter starting date: 09/13/2018
Enter ending date: 09/17/2018
 
09/13/2018 West
09/14/2018 West
09/15/2018 West
09/16/2018 West
09/17/2018 West
Explanation:
Date

East (ft)

West (ft)

 

09/13/2018

581.94

582.66

West is higher

09/14/2018

581.8

582.32

West is higher

09/15/2018

581.62

581.94

West is higher

09/16/2018

581.42

581.55

West is higher

09/17/2018

581.16

581.2

West is higher



Task D. Reverse chronological order
urn Back Time Illustration]
Write a program reverse-order.cpp which asks the user to input two dates (earlier date then later date). The program should report the West basin elevation for all days in the interval in the reverse chronological order (from the later date to the earlier).

Example:
$ ./reverse-order
Enter earlier date: 05/29/2018
Enter later date: 06/02/2018
 
06/02/2018  590.32 ft
06/01/2018  590.26 ft
05/31/2018  590.24 ft
05/30/2018  590.23 ft
05/29/2018  590.22 ft
Hint: If for the previous tasks you did not use arrays, here you really have to read the data into arrays first, and only then report them in the required order.

 
// Name: Tahmina Akther Munni
// course: CSCI 135 
// Assignment: Lab 2(C)
// Instructor: Tong yi
// Email: Tahmina.munni49@myhunter.cuny.edu
// This program create an arry of integer, prints all elements of the arry,ask the user to input new index and value. If the index array range (0<= i <10) update the aasked cell myData[10] = Value and go back to step 3,otherwise if index is out of range the program exist.(the repitition of steps 3_4_5 can be implemented with a do while loop or while loop

#include <iostream>
using namespace std;

int main()
{ 
    int myData[10];                   //step_1 size of array is 10	
    for (int i=0; i<10; i++)           // step_2 
    {    
         myData[i] = 1;                  // value of i is given 1 now
    }

    int index=0;                             // initialise index=0 to make sure it will go to the while loop
    while(index >=0 && index<10 ) 
    {

        for( int i=0; i<10; i++ )           // step_3 
        {  
	    cout << myData[i] << " ";          //print value of i
	    }
        cout << endl;

	    int value;                                 // step_4  input the cell index and its new value
	    cout << "Enter an index: ";
	    cin >> index;
	    cout << " Enter a value: ";
	    cin >> value;	
	
	    if (index >=0 && index <10)                  // STEP_5  whatever satisfy the condition of while loo might not satisfy anymore 
	    {
	        myData[index] = value;                   // update index with a new value
	    }
        else{
            cout<<"Index out of range. Exit.";
        } 
    }        
	return 0;				

}



// int main()
// {
//     int myData[10];
//     for(int i =0; i<10;i++){
//         myData[i]=1;             //filling arry with 1's
//         cout<<myData[i] << " " ;    // print the array
//     }
//      cout<<endl;


//     int indx=0;  //initializing outside of the loop and arry
//     do {
//         for(int i =0; i<10; i++){
//             cout << myData[i] << " ";    // print the array
//         }
//          cout<<endl;

//         // get i and v from the user
//         int val;
//         cout << "Enter an Index: ";
//         cin >> indx;
//         cout << "Enter a Value: ";
//         cin >> val;


//         // if i is good, update the array at index i
//         if (indx >= 0 && indx <= 9){
//             myData[indx]= val;
//         }else
//          {   
//               cout <<"Index out of range. Exit.";

//          }
        
//     } while (indx >= 0 && indx <= 9); // if the index was good, repeat
// }
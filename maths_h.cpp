// Maths Header Library 

#include<iostream>
#include<math.h>     // this header file used to maths inbuilt function  

#include<stdlib.h>   // this header file used to maths inbuilt function rand()  
using namespace std;

int main()
{

    // random numbers on every program run  / This function does not take any parameters.

    cout<<endl<<"Random number ans : "<<rand()<<endl<<endl;  // rand()%10 / rand()%100  to number in between 1 to 10 or 100 used 

    // Returns the value of x to the power of y >> 2 to 6 : 64
     cout<<"Power Of [ 2^6 ] ans : "<<pow(2,6)<<endl<<endl; 

     //  returns the square root of a number 

    //    square root of  >> 16 in to  4 
    cout<<"Square root of [ 16 ] ans : "<<sqrt(16)<<endl;

    //    square root of  >> 5 in to  2.23607 
    cout<<"Square root of [ 5 ]  ans : "<<sqrt(5)<<endl<<endl;

    //  this all ways return in  positive number  
 
     //	Returns the absolute value of x  >> 14.2  in to 14
     cout<<"Absolute value of [ 14.2 ] ans : "<<abs(14.2)<<endl;     

     //	Returns the absolute value of x  >> -13.0 in to 13  
    cout<<"Absolute value of [ -13.0 ] ans : "<<abs(-13.0)<<endl<<endl;    

    // round() returns the integral value that is nearest to the argument , with halfway cases rounded away from zero .

     // returns the integral value that is >> 15.2 in to 15  
    cout<<"Rounded value of [ 15.2 ] ans:"<<round(15.2)<<endl;

      // returns the integral value that is >> -8.9 in to -9
    cout<<"Rounded value of [ -8.9 ] ans:"<<round(-8.9)<<endl<<endl;

    // Returns the value of x rounded down to its nearest integer >> 4.8  in to 4  
     cout<<"Value of [ 4.8 ] rounded down to ans:"<<floor(4.8)<<endl;   

    // Returns the value of x rounded down to its nearest integer >>  -8.9 in to 9 
     cout<<"Value of [ -8.9 ] rounded down to ans:"<<floor(-8.9)<<endl<<endl;

    // Returns the value of x rounded up to its nearest integer  >> 7.8  in to  8   positive
     cout<<"Value of [ 7.8 ] rounded up to ans : "<<ceil(7.8)<<endl;   

    // Returns the value of x rounded up to its nearest integer  >> -6.7 in to  -6  negative  
     cout<<"Value of [ -6.7 ] rounded up to ans : "<<ceil(-6.7)<<endl<<endl;  
}
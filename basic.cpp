#include<iostream>
using namespace std; // this is a global declars name output for all out put  value 


int main()
{
    cout<<"Hello world./n";
    
    int a,b;   

    cout<<"\nEnter A :";  
    cin>>a;  // this is for used  for stor tha value in one veriable  cin>>a;

    cout<<"Enter B :";   // std call for stand output 
    cin>>b;  // this is for used  for stor tha value in one veriable  cin>>b;

    // if we have to stor botha value in one line than use cin>>a>>b; like this 

   int t1=a+b;
   int t2=a-b;
   int t3=a*b;
   int t4=a/b;


    // this  used for show for value in CMD  output 
    
   cout<<"\n Sum up  of a and b : "<<t1; 
   cout<<"\n subtraction  of a and b : "<<t2;  
   cout<<"\n multiplication  of a and b : "<<t3;   
   cout<<"\n Division of a and b : "<<t4;   

}

/*

c++ basic syntax


printf() -->  cout
                    <<   -->   inserton oprator 
                    ::   -->  scop resolutoin  oprator 


scanf() -->  cin 
                  >> --> extraction oprator                    
 


*/

#include<iostream>

using namespace std;

int main()
{
   int a,b,t;

   int *p1,*p2;
   
      
   cout<<"Enter a num 1: ";
   cin>>a;

   cout<<"Enter a num 2: ";
   cin>>b; 

   p1=&a; 
	p2=&b;

   t=*p1;
	*p1=*p2;
	*p2=t;
	 
	cout<<"\nA num is :"<<a;  
	cout<<"\nB num is :"<<b;  


}
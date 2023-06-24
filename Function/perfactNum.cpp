#include<iostream>

using namespace std;

 int perfact(int a)
 {
	int i,num=0;

   for(i=1;i<a;i++)
   {
	   if(a%i==0)
	   {
		   cout<<" "<<i;
		   num=num+i;
	   }
   }	
   
   cout<<" : "<<num;

   if(a==num)
   cout<<"\n This tha perfact Number is : "<<num;
   else 
   cout<<"\n This tha note perfact Number is : "<<num;
   
 }
 
 int main ()
 {
	int a;
	cout<<" Enter a Number : ";
	cin>>a;
	perfact(a);
	
 }
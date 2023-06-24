#include<iostream>

using namespace std;
 
int main()
{
  int i,num,a=0,b=1,c;

   cout<<"enter a number :";
   cin>>num;

   cout<<"\nFibonaci seres is : ";
   
   for(i=1;i<=num;i++)
   {
     cout<<" "<<a;
     c=a;
     a=a+b;
     b=c;
   }

}
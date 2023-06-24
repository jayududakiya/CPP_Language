#include<iostream>

using namespace std;

int main()
{
    int num,sum=0,reminder;

     cout<<"Enter number : ";
     cin>>num;

   while(num>0)
   {
    reminder=num%10;
    sum=sum+reminder;
    num=num/10;
   }

   cout<<"sum Desite is :"<<sum;

}
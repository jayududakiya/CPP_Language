#include<iostream>

using namespace std;

int main()
 {
  int i,num;

  cout<<"Enter a number : ";
  cin>>num;

  for(i=2;i<=num;i++)
  {
	  if(i%2==0)
	  {
		cout<<" "<<i;  
	  } 
  }

 }
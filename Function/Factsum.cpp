#include<iostream>

using namespace std;

#define n 5

int fact(int arr[]){
	
	int i,sum;
	
	for(i=0;i<n;i++)
  {
	  
	  if(i==0)
	  {
		  cout<<arr[i];
	  }
	  else{
	     sum=arr[i]+arr[i-1];
	     cout<<"\n"<<arr[i]<<"\t "<<sum;
	  }
  }	
	
}


int main()
{
  int arr[n],i;
  
  for(i=0;i<n;i++)
  {
	cout<<"["<<i<<"]""Enter a Number : ";
	cin>>arr[i];
  }
  
  cout<<"\n";
  fact(arr);
 
  
}
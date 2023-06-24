#include<iostream>

using namespace std;

int revers(int x)
{
  int y=0;
  while(x!=0){
    y=y*10+x%10;
	x/=10;
  }
  return y;
  
}

int main()
{
	int x,y;
	
	cout<<"Enter a number : ";
    cin>>x;
	
	y=revers(x);
	cout<<"The Revers Number is :"<<y;
}
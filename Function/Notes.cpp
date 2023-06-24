#include<iostream>

using namespace std;

int money(int c);

int main()
{

	int cash;
	cout<<"Enter your money : ";
	cin>>cash;
	money(cash);

}

int money(int c)
{

	int note[]={2000,500,200,100,75,50,20,10,5,2,1},n;

	for(int i=0;i<12;i++)
	{
		n=c/note[i]; // n==0 
		if(n!=0)    // (n!=0) == False 
		{
		    cout<<"\n""( "<<note[i]<<" )""your note num  is  : "<<n;
			c=c%note[i];   // c == 0  
		}
	}
}
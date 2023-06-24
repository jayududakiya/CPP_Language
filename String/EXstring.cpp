#include<iostream>

using namespace std;

int  main()
{
   char str[20];
   
    cout<<" Enetr a string : ";
	cin>>str;  // using to wreting string with space : "%[^\n]s"
	
	cout<<"\n your string is  : "<<str;
	
	int i=0;
    while(str[i]!='\0')
	{
		i++;
	}
	cout<<"\n your syring length is : "<<i;
	
}
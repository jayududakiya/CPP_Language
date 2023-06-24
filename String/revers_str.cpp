#include<iostream>

using namespace std;

int  main()
{
   char str[15];

   int i ,j;
   
    cout<<" Enetr a string : ";
	cin>>str;


	j=0;
	while(str[j]!='\0')
	{
		j++;
	}
	
    cout<<"\nYour revers string is : ";

    for(i=j;i>=0;i--)
	{
		cout<<" "<<str[i];
	}

}
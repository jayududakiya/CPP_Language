#include<iostream>

using namespace std;

int main()

{
	 int a[5][5],i,j;
	
	 for(i=0;i<3;i++){
			
		for(j=0;j<3;j++){
			cout<<"Enter val of a" "["<<i<<"]""["<<j<<"] :";
			cin>>a[i][j];
		}
		cout<<"\n";
	}
	
	
	for(i=0;i<3;i++){
 		
		for(j=0;j<3;j++){
		
		if(a[i][j]==0)
		{
		  cout<<"   ";	
		}
       	else
		{
			cout<<" "<<a[i][j];
		}
		}
		
		cout<<"\n";
	}
	
	
}
#include<iostream>

using namespace std ;

int main()

{
	 int a[5][5],i,j,total=0,total1=0,total2=0;
	
	 for(i=0;i<3;i++){
			
		for(j=0;j<3;j++){
			cout<<"Enter val of a" "["<<i<<"]""["<<j<<"] :";
			cin>>a[i][j];
		}
		cout<<"\n";
	}

	for (i=0;i<3;i++)
	{
		for (j=0;j<i;j++)
		{
		   total1+=a[i][j];
		}
	}
	
	for(i=0;i<3;i++){
 		
	 for(j=0;j<3;j++)
	 {
		cout<<" "<<a[i][j]; 
		
		if(i==j){
			total+=a[i][j];
		}
	    total2+=a[i][j];
	 }

     	cout<<"\n";
		
	}
	
	cout<<"\n digoal triangle total is : "<<total;
	cout<<"\n lower triangle total is : "<<total1;
	cout<<"\n uper triangle total is : "<<(total2-total)-total1;
	

}
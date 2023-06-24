#include<iostream>

using namespace std;


int main()
{

 char name[15]; // b i r y a n i  ==  b i i n r a y   
                // 0 1 2 3 4 5 6 \0   0 6 1 5 2 4 3  
 
    cout<<"Enter a name : ";
    cin>>name;

    int j = 0,k,i=0;
	while(name[j]!='\0')
	{
		j++;
	}
	//cout<<"lenth of string : "<<j;

	k = j-1;

	while(i<(j/2)){

		cout<<" "<<name[i]<<" "<<name[k];
		i++;
		k--;
	}
	if(j%2!=0){
		cout<<" "<<name[j/2];
	}
	
 
}

  



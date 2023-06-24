#include<iostream>

using namespace std;


int out(int m,int s,int e,int t,float p){
	cout<<"\nMaths\tScience\tEnglish\tTotal\tPre";
	cout<<"\n"<<m<<"\t"<<s<<"\t"<<e<<"\t"<<t<<"\t"<<p;
}

int calc(int m,int s,int e)
{
	int total;
	float pre;
	
	total=m+s+e;
	pre=(float)total/3;
	
	out(m,s,e,total,pre);
}


int main()
{
	int math,sci,eng;
	
	cout<<"Enter a Maths marks   : ";
	cin>>math;	
	cout<<"Enter a Science marks : ";
	cin>>sci;	
	cout<<"Enter a English marks : ";
	cin>>eng;	

	
	
	
	calc(math,sci,eng);
	

	
}

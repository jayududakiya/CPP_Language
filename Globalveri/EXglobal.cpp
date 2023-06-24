#include<iostream>

using namespace std;

//declare  globale variable

int maths,sci,eng,total; 
float per;

void dis()
{
    cout<<"\nMaths\tSci\tEnglish\tTotal\tper"; 
    cout<<"\n"<<maths<<"\t"<<sci<<"\t"<<eng<<"\t"<<total<<"\t"<<per;
}

void clac()
{
    total=maths+sci+eng;
    per=(float)total/3;
    dis();
}

void setdata()
{
    cout<<"Enter Maths marks : ";
    cin>>maths;
    cout<<"Enter Sci marks : ";
    cin>>sci;
    cout<<"Enter English marks : ";
    cin>>eng;
    clac();
}


int main()
{
  setdata();
}
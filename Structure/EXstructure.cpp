#include<iostream>

using namespace std;

struct Student
{
    int rollno;
    char name[50];
    int m,s,e;
    int t;
    float per;
};

int main()
{
    struct Student a[5];
    int i;


    for (i = 0; i < 2; i++)
    {

        cout<<"\nEnter a Roll No : ";
        cin>>a[i].rollno;
        cout<<"\nEnter a Name   : ";
        cin>>a[i].name;
        cout<<"\nEnter a Maths marks : ";
        cin>>a[i].m;
        cout<<"\nEnter a Scinse marks : ";
        cin>>a[i].s;
        cout<<"\nEnter a English marks : ";
        cin>>a[i].e;
        
       a[i].t=a[i].m+a[i].s+a[i].e;
       a[i].per=(float)a[i].t/3;
    }
    
        cout<<"\nRollNo\tName\tMaths\tSci\tEnglish\tTotal\tper";
    for ( i = 0; i < 2; i++)
    {
        cout<<"\n"<<a[i].rollno<<"\t"<<a[i].name<<"\t"<<a[i].m<<"\t"<<a[i].s<<"\t"<<a[i].e<<"\t"<<a[i].t<<"\t"<<a[i].per;

    }
    
    
    
}
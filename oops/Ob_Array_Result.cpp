#include<iostream>

using namespace std;

class Result
{
    int m,s,e,total;
    float per;

    public : 
     void setdata();
     float calc();
     void showdata();
};

void Result::setdata()
{
    cout<<"Enter maths marks : ";
    cin>>m;
   
    cout<<"Enter Science  marks : ";
    cin>>s;
   
    cout<<"Enter English marks : ";
    cin>>e;
    cout<<endl;
    calc();
}

float Result::calc()
{
    total = m+s+e;
    per = total/3;
}


void Result::showdata()
{
    cout<<"Maths\tScience\tEnglish\tTotal\tPercentage\t"<<endl;
    cout<<"\t\t"<<m<<"\t"<<s<<"\t"<<e<<"\t"<<total<<"\t"<<per<<" %\t"<<endl;
}


int main()
{
    Result stu[5];

    int i;

    for (i=0;i<3;i++)
    {
        cout<<"Student : "<<i+1<<endl;
        stu[i].setdata();
    }

    for (i=0;i<3;i++)
    {
        cout<<"Student : [ "<<i+1<<"]";
        stu[i].showdata();
    }

    
    
}

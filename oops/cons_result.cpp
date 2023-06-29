#include<iostream>

using namespace std;

class Result
{
    int s,m,e,total;
    char name[20];
    float per;
   

  public:

  Result()
  {
    cout<<"Enter Student name : ";
    cin>>name;

    cout<<"Enter Science : ";
    cin>>s;
    cout<<"Enter Mathas : ";
    cin>>m;
    cout<<"Enter English :  ";
    cin>>e;
    


  }

  void re_out()
  {
     total = s+m+e;
     per = float(total)/3;

    cout<<"Student name : "<<name<<endl;
    cout<<"Science : "<<s<<endl;
    cout<<"Maths : "<<m<<endl;
    cout<<"English : "<<e<<endl;
    cout<<"Total : "<<total<<endl;
    cout<<"Per is : "<<per<<" % ";

  }

};


int main()
{
    Result sub;

    sub.re_out();

}
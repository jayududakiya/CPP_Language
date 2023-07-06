// operator overloading using friend function 

#include<iostream>
using namespace std;

class box
{
  int l,w,h;

  public:

  void setdata(int a ,int b, int c)
  {
    l=a;
    w=b;
    h=c;
  }

  int getdata()
  {
    return l*w*h;
  }

  friend box operator+ (box m,box n)         //object as argument 
  {
    box t;
    t.w =  m.w + n.w;
    t.h =  m.h + n.h;
    t.l =  m.l + n.l;
    
    return t;                          //object as return 
  }
};


int main(){

    box a,b,c;
    a.setdata(2,2,2);
  cout<<"volume of A is : "<<a.getdata()<<endl;

  b.setdata(3,3,3);
  cout<<"volume of B is : "<<b.getdata()<<endl;

  c= a + b;  // 5 5 5
  cout<<"volume of C  is : "<<c.getdata()<<endl; //print sum values
  }
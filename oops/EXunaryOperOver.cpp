
#include<iostream>

using namespace std;

class Box
{
   int l,w,h;

   public :

   void setdata(int a,int b,int c)
   {
       l=a;
       w=b;
       h=c;
   }

   int getdata()
   {
    return l*w*h;
   }

   Box operator++ (int)
   {
      Box t;

      t.l = l++;
      t.w = w++;
      t.h = h++;

      return t;
   }

   Box operator++ ()
   {
      Box t;

      t.l = ++l;
      t.w = ++w;
      t.h = ++h;

      return t;
   }

};

int main ()
{
    Box a,b,x,y;

    a.setdata(2,5,8);
    cout<<"Value of A is : "<<a.getdata()<<endl;
  
    a++;
    b=a;

    cout<<"Postincremant Value of B is : "<<b.getdata()<<endl;
  
    x.setdata(2,4,8);
    cout<<"Value of x is : "<<x.getdata()<<endl;

    y=++x;

    cout<<"Preincremant Value of Y is : "<<y.getdata()<<endl;



}

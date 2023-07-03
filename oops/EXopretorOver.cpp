#include<iostream>

using namespace std;

class Box
{

int l,w,h;

public:

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


Box operator+ (Box &n)
{
    Box t;

    t.l= l + n.l;
    t.w= w + n.w;
    t.h= h + n.h;

    return t;

}

Box operator- (Box &n)
{
    Box t;

    t.l= l - n.l;
    t.w= w - n.w;
    t.h= h - n.h;

    return t;

}


Box operator* (Box &n)
{
    Box t;

    t.l= l * n.l;
    t.w= w * n.w;
    t.h= h * n.h;

    return t;

}

Box operator/ (Box &n)
{
    Box t;

    t.l= l / n.l;
    t.w= w / n.w;
    t.h= h / n.h;

    return t;

}

Box operator% (Box &n)
{
    Box t;

    t.l= l % n.l;
    t.w= w % n.w;
    t.h= h % n.h;

    return t;

}



};


int main ()
{
    Box a,b,c,d,e,x,y;

   b.setdata(2,2,2);
   cout<<"Box Volume Of B is  :  "<<b.getdata()<<endl;
   
   a.setdata(3,3,3);
   cout<<"Box Volume Of A is  :  "<<a.getdata()<<endl;

   c=a+b;
   cout<<"Box Volume of C is  : "<<c.getdata()<<endl;

   d=a-b;
   cout<<"Box Volume of D is  : "<<d.getdata()<<endl;

   e=a*b;
   cout<<"Box Volume of E is  : "<<e.getdata()<<endl;
   
   x=a/b;
   cout<<"Box Volume of X is  : "<<x.getdata()<<endl;
  
   y=a%b;
   cout<<"Box Volume of Y is  : "<<y.getdata()<<endl;



}
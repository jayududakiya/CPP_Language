// Pre-Increment Operator using friend fuction  [ Decrement  OR  Pre-Increment Operator (++x) and  Post-Increment Operator (x++)  ]  

#include<iostream>

using namespace std;

class Test
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

     friend Test operator++ (Test m)  // in the friend function [x++] Post-Increment  or Decrement  not not possible friend function is not acceptance  int tow value 
     {
         Test t;

         t.l = ++m.l;
         t.w = ++m.w;
         t.h = ++m.h;

         return t;
     } 

};

int main()
{
    Test a,b,c;

    a.setdata(2,2,2);
    cout<<"Value of A is [2*2*2] Ans : "<<a.getdata()<<endl;
    
    b.setdata(3,3,3);
    cout<<"Value of B is [3*3*3] Ans : "<<b.getdata()<<endl;

    c = ++b;
    cout<<"Pre-Increment Value of C [4*4*4] Ans is  : "<<c.getdata()<<endl;



}
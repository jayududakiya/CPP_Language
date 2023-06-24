#include<iostream>

using namespace std;

// pointer is store to address of other veriables 

// pointer is a refarans veriable


int main()
{
    int a=10,*p,**q;

    p=&a;
    q=&p;

    cout<<"value of A : "<<a<<"\n";
    cout<<"Address of A : " <<&a<<"\n";                  // %u
    cout<<"Address of A using P : "<<p<<"\n"; 
    cout<<"Address of  P : "<<&p<<"\n"; 
    cout<<"Value  of A using  P : "<<*p<<"\n"; 
    cout<<"Value  of A using  Q : " <<**q<<"\n"; 


    
}
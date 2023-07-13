#include<iostream>

using namespace std;

class pareant 
{
    public:
              // pure virtual fuction declared
     virtual void Dis() = 0 ;
};

class child : public pareant 
{
    public : 
     void Dis()
    {
        cout<<endl<<" \t Child as derived class ......";
    }
};


int main ()
{
    pareant *p;
    child c;

    p = &c;

    p -> Dis();
}
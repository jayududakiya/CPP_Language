#include<iostream>

using namespace std;

class base1
{
  protected :
    int m;
  
   public :

   void setM()
   {
     cout<<"Enter M : ";
     cin>>m;
    }

};

class base2
{
   protected :
    int n;
  
   public :

   void setN()
   {
     cout<<"Enter N : ";
     cin>>n;
    }

};

class derived : public base1 ,public base2 // in multiple inheritance a derived class inherit both class properties who declared as base class
{
    public : 

    void proudect()
    {
        cout<<"Product of N and M is : "<<n*m<<endl;
    }
};

int main ()
{
    derived Pro; // Always create a child class object, not a parent class object in All inheritence 

    Pro.setM();
    Pro.setN();
    Pro.proudect();
}


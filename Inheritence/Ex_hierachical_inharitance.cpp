#include<iostream>

using namespace std;

// parent class 

class Base   
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

// first child class  // inherting parent class 

class Derived1 : public Base  
{
    int n;

 public :
  void setN()
  {
    cout<<"Enter N :";
    cin>>n;
  }

  void addition ()
  {
    cout<<"Addition Of M and N is  : "<<m+n<<endl;
  }

};

// second child class  // inherting sem parent class as first child class inherting 

class Derived2 : public Base  
{
    int n;

    public : 
     void setN()
     {
        cout<<"Enter N : ";
        cin>>n;
     }

     void prouduct()
     {
        cout<<"Prouduct Of M and N is : "<<m*n<<endl;
     }
};

int main ()
{

    // both class has different method

    Derived1 R;  
     R.setM();  // perant class 
     R.setN();
     
     // this call from first child class 
      R.addition(); 

    Derived2 J;
     J.setM();  // perant class 
     J.setN();

     // this call from second child class 
      J.prouduct(); 
}


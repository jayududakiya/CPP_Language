#include<iostream>

using namespace std;

class base
{
    protected :
     int n;
   
    public:

    void setN()
    {
        cout<<"Enter N : ";
        cin>>n;
    }
};

class derived : public base // inherited of base class properties in derived class 
{
    public :   
  void show_n()
    {
        cout<<"Value Of N is : "<<n<<endl;
    }
};

int main ()
{
    derived N;  // Always create a child class object, not a parent class object

    N.setN();
    N.show_n();
}
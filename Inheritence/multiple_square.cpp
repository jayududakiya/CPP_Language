#include<iostream>

using namespace std;

class base1 // first base class
{
  protected:
    int n;

  public:
    void setN()
    {
        cout<<"Enter n : ";
        cin>>n;
    }
};

class base2 // second base class 
{
  protected :
    int i=0;
};

class derived : public base1 , public base2
{ 
  public :
    void get()
    {
     while(i<n)
     {
        i++;
        cout<<"Square of [ "<<i<<" ] : "<<i*i<<endl;
     }
    }
};

int main()
{
  derived N;

  N.setN();
  N.get();
}
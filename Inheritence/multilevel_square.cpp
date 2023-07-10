#include<iostream>

using namespace std;


// first class 

class base1
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

// second class 

class base2 : public base1
{
    protected :
    int i;
};


// derives class 

class derived : public base2
{
    public :
    int get()
     {
       for(i=1;i<=n;i++)
       {
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
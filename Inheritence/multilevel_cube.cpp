#include<iostream>

using namespace std;

class base1  // first class 
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
  int i,cube;
  public:
  void cube()
  {
    for(i=0;i<=n;i++)
    {
      cube=i*i*i;
    } 
  }
};

//  derived class

class derived : public base2
{
  public :
  int show()
    {
      cube();
      cout<<"Square of [ "<<n<<" ] : "<<cube<<endl;
    }
};

int main()
{
  derived N;

  N.setN();
  N.show();
}
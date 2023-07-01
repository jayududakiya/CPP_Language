#include<iostream>

using namespace std;

class Test
{


    public:
  Test()
  {
    cout<<"Default Constructor Auto call... "<<endl;
  }
 
  ~Test()
  {
    cout<<"Destructor Auto whan object  work end (destroe to object )is  call... "<<endl; // last call 
  }
 
  Test(int a)
  {
    cout<<"peramitraized constroctur call A  : "<<a<<endl;
  }

  Test(char a)
  {
    cout<<"Char value of A  : "<<a<<endl;
  }
};

int main()
{
    Test t,a(21),b('J');
}
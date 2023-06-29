#include<iostream>
using namespace std;

class Tast 
{

    public:
   Tast()
   {
    cout<<"Defualt Constructor type call.... "<<endl;
   }

   Tast(int a) // using int dataType 
   {
    cout<<"Perameterized Constructor type call.. A : "<<a<<endl;
   }

   Tast(char ch) // using char dataType 
   {
    cout<<"Perameterized Constructor type call.. ch : "<<ch<<endl;
   }
 
};

int main()
{
    Tast t,b(23),c('J');
}

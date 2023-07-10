#include<iostream>
using namespace std;

class base1
{
   protected :
   int num;
   public :
   void setnum()
   {
    cout<<"Enter num : ";
    cin>>num;
   }

};

class base2
{
  protected :
   int tab,i;
};


class derive  : public base1 , public base2
{
   public:

   void get_table()
   { 
      for(i=1;i<=10;i++)
    {
      tab=i*num;
      cout<<num<<" X "<<i<<" : "<<tab<<endl;
    }
   }
};


int main ()
{
   derive T ;
   
   T.setnum();
   T.get_table();
}
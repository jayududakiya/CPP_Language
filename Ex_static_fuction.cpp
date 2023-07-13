#include<iostream>

using namespace std;

class Test
{
    public:
     static int a ; // declare static member
      
      Test()
      {
        cout<<"\n \t\t test calling ..... ";
        ++a; // Increase
      }

    //   Only the staticc variable is used in the staticc function 
    
      static int memeber() // create static fuction 
      {
        return a;
      }
};

int Test :: a = 50 ; // satrting increase 


int main ()
{
    cout<<endl<<"\t Starting Increase point :  "<<Test :: a;

    Test T1,T2; // Increase 2 times because we make her two objects  if  we are  create three object than increase 3 times 

    cout<<endl<<"\t Ending Increase point :  "<<Test :: a <<endl;
}

// a mixture of multiple , hierarchical and multilevel inheritance called Hybrid inheritance

#include<iostream>

using namespace std;

class Base  // parent class 
{
    public :

     Base()
     {
        cout<<endl<<" > Base class Call .....";
     }
};


//ABC is child class for base class 

class ABC : public Base 
{
   public: 
    ABC()
    {
        cout<<endl<<" > ABC class Call .....";
    }
};


// XYZ is child class for base class 

class XYZ : public Base 
{
    public : 
      XYZ()
      {
        cout<<endl<<" > XYZ class Call .....";
      }
     
};

// PQR is child class for class XYZ & ABC 


// class PQR is inheriting all class properties first class's XYZ & ABC properties directly 
//  and class Base properties indirectly 
// , because of classes XYZ and ABC is inheriting base class properties

class PQR : public XYZ , public ABC  
{
     public : 
      PQR()
      {
        cout<<endl<<" > PQR class Call ....."; 
      }

};

int main ()
{
    PQR obj;

}
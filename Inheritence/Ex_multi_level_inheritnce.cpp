#include<iostream>

using namespace std;

// multilevel inheritance work in line like first , second ,third .... etc , and last class is derived class

class base1 // (First base class)
{
   protected:
   int a;
 public:
   void setA()
   {
    cout<<"Enter A : ";
    cin>>a;
   }
};

// (Second base class )

class base2 : public base1  //in multilevel inheritance second base class inherited first base class properties
{
   protected:
   int b;
 public:
   void setB()
   {
    cout<<"Enter A : ";
    cin>>b;
   }
};


// (Derivrd class )

class derived : public base2 // and derived class a inherited last base class or (second class) all properties  and also derived class inherited first class properties 
{
    protected:
   int c;
 public:
   void setC()
   {
    cout<<"Enter C : ";
    cin>>c;
   }

   void Addition()
   {
    cout<<"Addition of A , B and C is : "<<a+b+c<<endl;
   }

};

int main ()
 {
    derived d;

    d.setA();
    d.setB();
    d.setC();
    d.Addition();
}

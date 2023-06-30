#include<iostream>

using namespace std;

class Area
{

public:
  
   Area()
   {
     cout<<"\t Area of shape is"<<endl;
   }


   Area(int side)
   {
     cout<<" Calculate area of Square : "<<side*side<<endl;
   }

   Area(double red)
   {
     cout<<" Calculate area of Circle : "<<3.14*(red*red)<<endl;
   }

   Area(int width , int height)
   {
      cout<<" Calculate area of Rectangle  "<<width*height<<endl;
   }

   Area(double b , double h)
   {
      cout<<" Calculate area of Triengale  "<<0.5*b*h<<endl;
   }


};


int  main()
{
    Area area0,area1(4),area2(3.6),area3(10,20),area4(3.4,5.1);
}
#include<iostream>
#include<string>

using namespace std;

class Flight_number
{
 private:
    int f_number;
    float distance,fuel;
    string destination;  

  float CalFuel()
  {
    if(distance>0 && distance<=1000)
    {
       return 500;
    }

    else if(distance>1001 && distance<=2000)
    {
      return 1100;
    }

    else 
    {
       return 2200;
    }

  }
 
 public:
  void FEEDINFO()
  {
    cout<<"Enter Your Flight Number : ";
    cin>>f_number;
    cout<<"Enter Your destination :  ";
    cin>>destination;
    cout<<"Enter Your Distance : ";
    cin>>distance;
    Show_INFO();
  }

  void Show_INFO()
  {
    cout<<"Flight Number : "<<f_number;
    cout<<endl<<"Destination is : "<<destination;
    cout<<endl<<"Distance is : "<<distance;
     fuel = CalFuel();
    cout<<endl<<"you need Fuel is : "<<fuel;
  }

};

int main ()
{
    Flight_number flight1;

    flight1.FEEDINFO();
}


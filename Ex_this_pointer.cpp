#include<iostream>
#include<string.h> 

using namespace std;

class Bank
{
    string name ;
    int balance;
     
     public : 
      void Get_data(string name,int balance) 
      {
        this -> name = name;
        this -> balance = balance ;
        

      }

      void display_Data()
      {
         cout<<"Your name : "<<name<<endl;
         cout<<"Your Balance : "<<balance;
      }

};

int main ()
{
    Bank B;

    B.Get_data("Hello ", 12345);
    B.display_Data();
}
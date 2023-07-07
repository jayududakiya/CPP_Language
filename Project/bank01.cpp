#include<iostream>
#include <stdlib.h> // for using rand() function 

using namespace std;

class bank
{
  private : 
    int depo,balance,withd,i;

    char name[20];
    int acc_No;

  public:     
    bank()
    {

      cout<<endl<<"\t Welcome To World Bank "<<endl;
       
       cout<<"Choose Your Account "<<endl;
       
        cout<<" Saving Account :"<<endl;
        cout<<endl<<"Enter Your name : ";
        cin>>name;
        for(int j = 0;j<5;j++)
        {
          acc_No=rand();
        }
        cout<<endl<<"Your account number is : "<<acc_No;
        cout<<endl<<"Enter Your Balance is : ";
        cin>>balance;
        saving_acc();
      
    }

    void saving_acc()
    {
          cout<<"\t Saving Account : "<<endl;
           cout<<endl<<"Press [1] To Check Account Balance : ";
           cout<<endl<<"Press [2] To Deposit Monney : ";
           cout<<endl<<"Press [3] To Withdrawal  Monney : ";
           cout<<endl<<"Press [4] To menu  : ";
           cout<<endl<<"Press [0] To Exit :  "<<endl;

            cin>>i;
             switch (i)
             {
             case 1:
                 show_Balance();
              break;
             case 2:
                 Deposit();
              break;
             case 3:
                 withdrawal();
              break; 

              case 4:
                  saving_acc();
              break;

              case 0:
                break;

             }
    }

    void show_Balance()
    {
      cout<<"Your Balance "<<endl<<"\t"<<balance<<endl; 
          
      cout<<endl<<"Press [1] To Back To  Menu : ";
      cout<<endl<<"Press [0] To Exit : ";cin>>i;
      switch (i)
      {
      case 1:
            saving_acc();
        break;
      case 0:
           break;
      }   
    }

    int Deposit()
    {
      cout<<"Enter Yout deposit Amount : ";cin>>depo;

      balance=depo+balance;

      cout<<"Your Current balance is ";show_Balance();
    
      
      cout<<endl<<"Press [1] To Back To Menu : ";
      cout<<endl<<"Press [0] To Exit : ";cin>>i;
      switch (i)
      {
      case 1:
            saving_acc();
        break;
      case 0:
           break;
      }   
    }

    int withdrawal()
    {
      cout<<"Enter  your withdrawal Amount : ";cin>>withd;

      balance = balance - withd;

      cout<<"Your Current balance is ";show_Balance();

          
      
      cout<<endl<<"Press [1] To Back To Menu : ";
      cout<<endl<<"Press [0] To Exit : ";cin>>i;
      switch (i)
      {
      case 1:
            saving_acc();
        break;
      case 0:
          break;
      }   

    }


    
};

int main ()
{
  bank a;

}

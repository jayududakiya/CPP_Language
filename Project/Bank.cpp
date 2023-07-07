#include<iostream>

using namespace std ;

class bank
{
  private : 
    int depo,balance=0,withd;

public:
 

    int Deposit()
    {
      cout<<"Enter Yout deposit Amount : ";cin>>depo;
      balance=depo+balance;
    }

    int withdrawal()
    {
      cout<<"Enter  your withdrawal Amount : ";cin>>withd;
      balance = balance - withd;
    }

    void show_Balance()
    {
      cout<<"Your Balance "<<endl<<"\t"<<balance<<endl; 
    }

};

int main()
{
    bank a;
    int ch;

        cout<<endl<<"Press [1] To Check Account Balance : ";
        cout<<endl<<"Press [2] To Withdrawal  Monney : ";
        cout<<endl<<"Press [3] To Deposit Monney : ";
        cout<<endl<<"Press [0] To Exit :  "<<endl;

    

    do{
           cout<<"Choice Your Transaction : "<<endl;
           cin>>ch;
     switch(ch){

        case 1:
            a.show_Balance();
            break;
        case 2:
            a.withdrawal();
            break;
        case 3:
            a.Deposit();
            break;
        case 0: 
            break;
        default:
            printf("Wrong Choice...");
            break;
    }
    }while(ch!=0);
}





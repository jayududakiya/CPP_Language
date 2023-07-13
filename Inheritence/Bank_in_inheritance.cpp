#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
/*
    1.Saving Account
    2.current Account

    Account Creation
    Deposit
    Withdraw
    Balance
*/ 



class Account 
{
  public:

   void Welcome()
   {
     cout<<endl<<"\t\t HELLO WELCOME TO BANK "<<endl;
   }
   void good_buy()
   {
        cout<<endl<<"\t Thank You For Banking With Us "<<endl<<
                     " \t Have a Nice Day " <<endl;
   }

};

class Saving : public Account
{

  int depoist,withdraw,S_balance=1000; 

  public:
    void S_Show_balance()
    {
        cout<<"\t Balance is : "<<S_balance<<endl;
    }
    

    void S_Deposit()
    {
      cout<<endl<<"\t Enter Deposit Amount : ";cin>>depoist;
      S_balance=S_balance+depoist;
      cout<<endl;
    }

    void S_Withdraw()
    {
      cout<<"Your Saving Account Balance is : "<<S_balance<<endl;  
      cout<<"\t Enter Withdraw Amount : ";cin>>withdraw;
      if(withdraw > S_balance )
      {
        cout<<"\t You Are Not Able To Withraw Money Account Balance Is Low"<<endl;
      }
      else
      {
      S_balance=S_balance-withdraw;
      cout<<endl;
      }
    }

};

class Current : public Account
{

  int depoist,withdraw,C_balance=10000; 

  public:
    void C_Show_balance()
    {
        cout<<"\t Balance is : "<<C_balance<<endl;
    }
    
    void C_Deposit()
    {
      cout<<endl<<"\t Enter Deposit Amount : ";cin>>depoist;
      C_balance=C_balance+depoist;
      cout<<endl;
    }

    void C_Withdraw()
    {
      cout<<"Your Current Account Balance is : "<<C_balance<<endl;  
      cout<<endl<<"\t Enter Withdraw Amount : ";cin>>withdraw;
     if(withdraw > C_balance )
      {
        cout<<"\t You Are Not Able To Withraw Money Account Balance Is Low"<<endl;
      }
      else
      {
       C_balance=C_balance-withdraw;
       cout<<endl;
      }
    }
};


class User : public Saving , public Current {
  public :
    int Ac_No;
    int i=0,j;
    string name,Ac_type;

    void get_Ac_Detail(){
      cout<<endl<<"Enter Customer Name : ";cin>>name; 
      cout<<"Enter your Account type is : ";cin>>Ac_type;
      while(name[i]!=0){i++;}
       for (j=0;j<=i;j++)
       { Ac_No= rand();}
       cout<<"Account Number is :  143 128 "<<Ac_No<<endl;

    }

    void Show_Ac_details()
    {
      cout<<endl<<"\t Customer Name : "<<name<<endl;
      cout<<"\t Account Number : 143 128 "<<Ac_No<<endl;
      cout<<"\t Enter your Account type is : "<<Ac_type<<endl<<endl;
    }
    

};

void choice ()
{
      cout<<"\n\t 1 >   Depoist"<<endl;
      cout<<"\t 2 >   Withdraw"<<endl;
      cout<<"\t 3 >   Display Balance"<<endl;
      cout<<"\t 4 >   Display Account Details"<<endl;
      cout<<"\t 5 >   To Switch Account "<<endl;
      cout<<"\t 0 >   Exit"<<endl;
}

int main ()
{

    User C;
    Account A;

    A.Welcome();
    C.get_Ac_Detail();
    bool S1;               // booling veriable 
    S1=C.Ac_type == "saving";  // 1 To saving and 0 To current
        choice();
        int j;
        do
        {
          cout<<endl<<"Enter Your choice: ";
          cin>>j;
          cout<<endl;
            switch(j)
          {
             case 1: 
                    if(S1==1){ C.S_Deposit(); }
                    else{ C.C_Deposit();}
                    cout<<endl<<"\t";choice();
              break;
             case 2: 
                    if(S1==1){ C.S_Withdraw(); }
                    else{ C.C_Withdraw();}
                    cout<<endl<<"\t";choice();
              break;
             case 3: 
                    if(S1==1){ C.S_Show_balance(); }
                    else{ C.C_Show_balance();}
                    cout<<endl<<"\t";choice();
              break;
             case 4: 
                    if(S1==1)
                    { 
                      C.Show_Ac_details();
                      C.S_Show_balance();  
                      cout<<endl<<"\t";choice();
                    }
                    else
                    { 
                      C.Show_Ac_details();
                      C.C_Show_balance();
                      cout<<endl<<"\t";choice();
                    }        
              break;
             case 5: 
                    if(S1==1)
                    {
                      S1=0;
                      C.get_Ac_Detail();
                      C.C_Show_balance();
                      cout<<endl<<"\t";choice();
                      cout<<endl<<" \t\t >>  Your Now Switch In Current Account << "<<endl;
                    }
                    else {
                      S1=1;
                      C.get_Ac_Detail();
                      C.S_Show_balance();
                      cout<<endl<<"\t";choice();
                      cout<<endl<<" \t\t >>  Your Now Switch In Saving Account << "<<endl;
                    }        
              break;

              case 0: break;
           }
        }while(j!=0);

        A.good_buy();
}

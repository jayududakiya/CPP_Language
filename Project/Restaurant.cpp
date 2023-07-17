#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;

class  Carnival_resto
{
    protected :
     string name ,  contact_no ;

    public :
      Carnival_resto()
      {
        cout<<"\n\t\t\t\t ==========|*| WELCOME TO CARNIVAL RESTAURENT |*|========== \n\n";
        cout<<"\n\t\t\t\t __________| |   We Are Happy To Serve You    | |____________ \n";
        cout<<"\n\t\t\t\t __________________________________________________________  \n";
      }

    void Get_customer_info()
    {
        cout<<"\n\t\t\t  Please Enter Your Name : ";
        cin>>name;
        cout<<"\n\t\t\t  Please Enter Your Moblie No. : ";
        cin>>contact_no;
    }    
     
     void Dis_customer_info()
     {
         cout<<"\n\t\t\t\t __________| |      Confirm Order BIll      | |____________ \n";
        cout<<"\n\t\t\t\t __________________________________________________________  \n";   
        cout<<"\n\t\t\t  Hello : "<<name<<endl;
        cout<<"\n\t\t\t  Moblie No. : "<<contact_no<<endl;
    } 

    void Thanks()
    {
        cout<<"\n \t\t\t\t\t\t\t\t    Thank you for visiting us\n\n\t\t\t\t=====|*|Please come again|*|=====\n\n";
    }
      
};


class menu_items : public Carnival_resto
{
    protected :
      int  Bill =0  , Quty , order ;

      double CGST=0 , SGST=0 , TGST ;
      double  Bill_Amt =0  , Disc  ;
      int Total =0;

      string AItems[5] , PItems[5] , PaItems[5] , DItems[5] , SaItems[5] ;
   
    public: 


      double get_Amt()
      {
        return  Bill_Amt = Bill_Amt + Bill;
      }

      double get_CGST()
      {
        return CGST = Bill_Amt*0.025;
      }

      double get_SGST()
      {
        return SGST = Bill_Amt*0.025;
      }

      double get_TGST()
      {
        return TGST = SGST + CGST;
      }

       double get_Total()
      {
        return Total = ( Bill_Amt + TGST )-Disc;
      }

      double get_discount()
      {
        if(Bill_Amt>2500)
        { 
           Disc = Bill_Amt * 0.1 ; 
        } 
        else 
       {
         Disc = 0;
       }   

       return Disc ;
      }     

      void Show_bill()
      {
        cout<<"\t\t\t\t\t\t Bill Amount is       : "<<get_Amt();
        cout<<"\n \t\t\t\t\t\t\t\t\t\t Bill Discount is     : "<<get_discount();
        cout<<"\n \t\t\t\t\t\t\t\t\t\t Bill CGST is         : "<<get_CGST();
        cout<<"\n \t\t\t\t\t\t\t\t\t\t Bill SGST is         : "<<get_SGST();
        cout<<"\n \t\t\t\t\t\t\t\t\t\t Bill TGST is         : "<<get_TGST();
        cout<<"\n \t\t\t\t\t\t\t\t\t\t Total bill amount is : "<<get_Total();
      }




 // ======================================================= 


    double Indian_food()
    {
      cout<<"\n\n \t\t\t\t\t\t==========|*| ITEM [1] |*|========== \n\n";
      cout<<"\n \t\t\t\t\t\t [1] Fried  Rice     : 360 /- ";
      cout<<"\n \t\t\t\t\t\t [2] Mysore Dosa     : 260 /- ";
      cout<<"\n \t\t\t\t\t\t [3] Hakka Noodles   : 360 /- ";
      cout<<"\n \t\t\t\t\t\t [4] Pav bhaji       : 280 /- ";
      cout<<"\n \t\t\t\t\t\t [5] Rasgulla        : 180 /- ";
      cout<<"\n\n \t\t\t\t\t\t Confirm order & Go to main MENU [0] \n";

        do
        {
          cout<<"\n \t\t\t\t Choice Order : ";
          cin>>order;
           switch (order)
           {
           case 1: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*360;
                AItems[0] = "Fried  Rice";
            break;

            case 2: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*260;
                AItems[1] = " Mysore Dosa ";
            break;

            case 3: 
                cout<<"\t\t\t\tHow much Quantity: ";
                cin>>Quty;
                Bill = Bill + Quty*360;
                AItems[2] = " Hakka Noodles  ";
            break;

            case 4: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*280;
                AItems[3] = "  Pav bhaji ";
            break;

            case 5: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*180;
                AItems[4] = " Rasgulla ";
            break; 

            case 0 : break;

           }

        }while (order!=0);

    }// end first function 


// =======================================================


     double Pizza()
     {
      cout<<"\n\n \t\t\t\t\t\t==========|*| ITEM [2] |*|========== \n\n";
      cout<<"\n \t\t\t\t\t\t [1] Margherita Pizza       : 425 /- ";
      cout<<"\n \t\t\t\t\t\t [2] Four Seasons Pizza     : 450 /- ";
      cout<<"\n \t\t\t\t\t\t [3] Oriental Pizza         : 360 /- ";
      cout<<"\n \t\t\t\t\t\t [4] Indienne Pizza         : 480 /- ";
      cout<<"\n \t\t\t\t\t\t [5] Verduras Pizza         : 380 /- ";
      cout<<"\n\n \t\t\t\t\t\t Confirm order & Go to main MENU [0] \n";
       
         do
        {
          cout<<"\n \t\t\t\t Choice Order : ";
          cin>>order;
           switch (order)
           {
           case 1: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*425;
                PItems[0] = "  Margherita Pizza ";
            break;

            case 2: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*450;
                PItems[1] = " Four Seasons Pizza ";
            break;

            case 3: 
                cout<<"\t\t\t\tHow much Quantity: ";
                cin>>Quty;
                Bill = Bill + Quty*360;
                PItems[2] = " Oriental Pizza ";
            break;

            case 4: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*480;
                PItems[3] = " Indienne Pizza ";
            break;

            case 5: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*380;
                PItems[4] = " Verduras Pizza ";
            break;
           
            case 0 : break; 

           }

        } while (order!=0);
     } // end second function 

// =======================================================

     int Pasta()
     {
       cout<<"\n\n \t\t\t\t\t\t==========|*| ITEM [3] |*|========== \n\n";
       cout<<"\n \t\t\t\t\t\t [1] Arabiata Pasta         : 125 /- ";
       cout<<"\n \t\t\t\t\t\t [2] Aglo Olio Pasta        : 150 /- ";
       cout<<"\n \t\t\t\t\t\t [3] Quatro Formaggio Pasta : 160 /- ";
       cout<<"\n \t\t\t\t\t\t [4] Pesto Pepper Pasta     : 280 /- ";
       cout<<"\n \t\t\t\t\t\t [5] Cheese Pasta           : 180 /- ";
       cout<<"\n\n \t\t\t\t\t\t Confirm order & Go to main MENU [0]  \n";

         do
        {
          cout<<"\n \t\t\t\t Choice Order : ";
          cin>>order;
           switch (order)
           {
           case 1: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*125;
                PaItems[0] = " Arabiata Pasta  ";
            break;

            case 2: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*150;
                PaItems[1] = " Aglo Olio Pasta ";
            break;

            case 3: 
                cout<<"\t\t\t\tHow much Quantity: ";
                cin>>Quty;
                Bill = Bill + Quty*160;
                PaItems[2] = " Quatro Formaggio Pasta ";
            break;

            case 4: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*280;
                PaItems[3] = " Pesto Pepper Pasta ";
            break;

            case 5: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*180;
                PaItems[4] = " Cheese Pasta ";
            break;
           
            case 0 :
             break; 

           }

        }while (order!=0);
           
     }// end third function 

// =======================================================

     int Drinks()
     {
       cout<<"\n\n \t\t\t\t\t\t==========|*| ITEM [4] |*|========== \n\n";
       cout<<"\n \t\t\t\t\t\t [1] Cold Coffee        : 250 /- ";
       cout<<"\n \t\t\t\t\t\t [2] Fresh Fruit Juice  : 250 /- ";
       cout<<"\n \t\t\t\t\t\t [3] Fresh Lime Soda    : 150 /- ";
       cout<<"\n \t\t\t\t\t\t [4] Masala Chaas Lassi : 100 /- ";
       cout<<"\n \t\t\t\t\t\t [5] Energy Drink       : 170 /- ";
       cout<<"\n\n \t\t\t\t\t\t Confirm order & Go to main MENU [0]  \n";

        do
        {
          cout<<"\n \t\t\t\t Choice Order : ";
          cin>>order;
           switch (order)
           {
           case 1: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*250;
                DItems[0] = " Cold Coffee  ";
            break;

            case 2: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*250;
                DItems[1] = "Fresh Fruit Juice";
            break;

            case 3: 
                cout<<"\t\t\t\tHow much Quantity: ";
                cin>>Quty;
                Bill = Bill + Quty*150;
                DItems[2] = " Fresh Lime Soda ";
            break;

            case 4: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*100;
                DItems[3] = " Masala Chaas Lassi ";
            break;

            case 5: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*170;
                DItems[4] = "Energy Drink (250 ml)";
            break;
           
            case 0 :
             break; 

           }

        }while (order!=0);
     } // end fourth function

// =======================================================

     int Dessert()
     {
       cout<<"\n\n \t\t\t\t\t\t==========|*| ITEM [5] |*|========== \n\n";
       cout<<"\n \t\t\t\t\t\t  [1] Mint Ice Cream        : 150 /- ";
       cout<<"\n \t\t\t\t\t\t  [2] Malai kulfi           : 100 /- ";
       cout<<"\n \t\t\t\t\t\t  [3] Mango kulfi           : 100 /- ";
       cout<<"\n \t\t\t\t\t\t  [4] Sizzling Brownie      : 170 /- ";
       cout<<"\n \t\t\t\t\t\t  [5] Dessert of the day    : 180 /- ";
       cout<<"\n\n \t\t\t\t\t\t  Confirm order & Go to main MENU [0] \n  ";
   
        do
        {
          cout<<"\n \t\t\t\t Choice Order : ";
          cin>>order;
           switch (order)
           {
           case 1: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*150;
                SaItems[0] = " Mint Ice Cream ";
            break;

            case 2: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*100;
                SaItems[1] = " Malai kulfi ";
            break;

            case 3: 
                cout<<"\t\t\t\tHow much Quantity: ";
                cin>>Quty;
                Bill = Bill + Quty*100;
                SaItems[2] = "Mango kulfi  ";
            break;

            case 4: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*170;
                SaItems[3] = "  Sizzling Brownie ";
            break;

            case 5: 
                cout<<"\t\t\t\tHow much Quantity : ";
                cin>>Quty;
                Bill = Bill + Quty*180;
                SaItems[4] = " Dessert of the day ";
            break;
           
            case 0 : 
             break; 

           }

        } while (order!=0);
          
     } // end fifth function


// =======================================================

    


// =======================================================

void show_bill_Items()
{
  for (int i=0;i<5;i++)
        {
            if (!AItems[i].empty())
            cout<<"\n \t\t\t "<<i + 1<<" : "<<AItems[i];

            else if (!PItems[i].empty())
            cout<<"\n \t\t\t "<<i + 1<<" : "<<PItems[i];

            else if (!PaItems[i].empty())
            cout<<"\n \t\t\t "<<i + 1<<" : "<<PaItems[i];

            else if (!DItems[i].empty())
            cout<<"\n \t\t\t "<<i + 1<<" : "<<DItems[i];

            else if (!SaItems[i].empty())
            cout<<"\n \t\t\t "<<i + 1<<" :  "<<SaItems[i];
        }
}

// =======================================================

};


int main ()
{
    menu_items R;
    int choice;

    R.Get_customer_info();
      
    do
    {
      cout<<"\n\n \t\t\t\t\t\t==========|*| MENU |*|========== \n\n";
      cout<<"\n \t\t\t\t\t\t [1] Indian on the go"; //
      cout<<"\n \t\t\t\t\t\t [2] Pizza   "; //
      cout<<"\n \t\t\t\t\t\t [3] Pasta   ";
      cout<<"\n \t\t\t\t\t\t [4] Drinks  ";
      cout<<"\n \t\t\t\t\t\t [5] Dessert \n";
      cout<<"\n \t\t\t\t\t\t EXIT OR Order Again [0] \n";
      cout<<"\n \t\t\t\tEnter choice : ";
      cin>>choice;
        switch (choice)
        {
         case 1:
            R.Indian_food(); 
          break;

         case 2: 
             R.Pizza();
          break;

         case 3: 
             R.Pasta();
         break;

         case 4: 
             R.Drinks();
          break;

         case 5: 
             R.Dessert();
          break;

          case 0: 
          break;
        }
    } while (choice!=0);

            R.Dis_customer_info();
            R.show_bill_Items();
            R.Show_bill();
            cout<<endl;
            R.Thanks();
}
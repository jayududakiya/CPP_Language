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

         cout<<"\n\t __________| |   Our To Day Special Offer  Make Bill Up To 2500 Rs And Get '10%' Discount  | |____________ \n";
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
        cout<<"\n \t\t\t\t\t\t   Thank you for visiting us\n\n\t\t\t\t\t\t=====|*|Please come again|*|=====\n\n";
    }
      
};


class menu_items : public Carnival_resto
{
    protected :
      int  Bill =0,Quty;

      double CGST=0 , SGST=0 , TGST ;
      double  Bill_Amt =0  , Disc  ;
      int Total =0 , i;

      string NItems[25];
      int IQuty[25] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
   
    public: 
 
        int order , choice;

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
        cout<<"\t\t\t\t\t\t\t\t\t\t Bill Amount          : "<<get_Amt();
        cout<<"\n \t\t\t\t\t\t\t\t\t\t Discount  10%        : "<<get_discount();
        cout<<"\n \t\t\t\t\t\t\t\t\t\t CGST 2.5%            : "<<get_CGST();
        cout<<"\n \t\t\t\t\t\t\t\t\t\t SGST 2.5%            : "<<get_SGST();
        cout<<"\n \t\t\t\t\t\t\t\t\t\t TGST 5%              : "<<get_TGST();
        cout<<"\n \t\t\t\t\t\t\t\t\t\t Total Price          : "<<get_Total();
      }



 void main_menu()
  {

    while(choice!=0 && order!=0)    
    { 
      
      cout<<"\n\n \t\t\t\t\t\t==========|*| MENU |*|========== \n\n";
      cout<<"\n \t\t\t\t\t\t [1] Indian Food";
      cout<<"\n \t\t\t\t\t\t [2] Pizza   "; 
      cout<<"\n \t\t\t\t\t\t [3] Pasta   ";
      cout<<"\n \t\t\t\t\t\t [4] Drinks  ";
      cout<<"\n \t\t\t\t\t\t [5] Dessert \n";
      cout<<"\n \t\t\t\t\t\t EXIT [9] \n";
      cout<<"\n \t\t\t\t\t\t Confirm order [0] \n";
      
      cout<<"\n \t\t\t\tEnter choice : ";
      cin>>choice;
        switch (choice)
        {
         case 1:
            Indian_food(); 
          break;

         case 2: 
             Pizza();
          break;

         case 3: 
             Pasta();
         break;

         case 4: 
             Drinks();
          break;

         case 5: 
             Dessert();
          break;

          case 0: 
            order=0;
          break;

          case 9: 
            Bill=0;
            order=0;
            break; 
        }
    }
    
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
      cout<<"\n\n \t\t\t\t\t\t Enter [9] To Go MAIN MENU ";
      cout<<"\n \t\t\t\t\t\t Confirm order [0] \n";
      cout<<"\n \t\t\t\t\t\t cancel order [8] \n";


        do
        {
          cout<<"\n \t\t\t\t Choice Order : ";
          cin>>order;
           switch (order)
           {
           case 1: 
                cout<<"\t\t\t\t How Many Fried Rice : ";
                cin>>Quty;
                IQuty[0]+=Quty;
                Bill = Bill + Quty*360;
                NItems[0] = "Fried  Rice";
            break;

            case 2: 
                cout<<"\t\t\t\t How Many Mysore Dosa : ";
                cin>>Quty;
                IQuty[1]+=Quty;
                Bill = Bill + Quty*260;
                NItems[1] = " Mysore Dosa ";
            break;

            case 3: 
                cout<<"\t\t\t\t How Many Hakka Noodles : ";
                cin>>Quty;
                IQuty[2]+=Quty;
                Bill = Bill + Quty*360;
                NItems[2] = " Hakka Noodles  ";
            break;

            case 4: 
                cout<<"\t\t\t\t How Many Pav bhaji : ";
                cin>>Quty;
                IQuty[3]+=Quty;
                Bill = Bill + Quty*280;
                NItems[3] = "  Pav bhaji ";
            break;

            case 5: 
                cout<<"\t\t\t\t How Many Rasgulla : ";
                cin>>Quty;
                IQuty[4]+=Quty;
                Bill = Bill + Quty*180;
                NItems[4] = " Rasgulla ";
            break; 

            case 0 : order=0; break;
             
             case 8:
                Bill=0;
                Cancel_order();
                char ch;
                 cout<<"\n\t\t\t\t __________| |        Youe Order Is Cancel Now          | |____________ \n";
                 cout<<"\n\t\t\t\t __________| |   What else do you want to order? Y/N    | |____________ \n";cin>>ch;
                 if(ch=='Y'||ch=='y') main_menu();
                 else if(ch=='N'||ch=='n') order=0;
              break;

             case 9 : main_menu(); break;

             

           }

        }while(order!=0);

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
      cout<<"\n\n \t\t\t\t\t\t Enter [9] To Go MAIN MENU ";
      cout<<"\n \t\t\t\t\t\t Confirm order [0] \n";
      cout<<"\n \t\t\t\t\t\t cancel order [8] \n";
       
         do
        {
          cout<<"\n \t\t\t\t Choice Order : ";
          cin>>order;
           switch (order)
           {
           case 1: 
                cout<<"\t\t\t\t How Many Piazz : ";
                cin>>Quty;
                IQuty[5]+=Quty;
                Bill = Bill + Quty*425;
                NItems[5] = "  Margherita Pizza ";
            break;

            case 2: 
                cout<<"\t\t\t\t How Many Pizza : ";
                cin>>Quty;
                IQuty[6]+=Quty;
                Bill = Bill + Quty*450;
                NItems[6] = " Four Seasons Pizza ";
            break;

            case 3: 
                cout<<"\t\t\t\t How Many Pizza : ";
                cin>>Quty;
                IQuty[7]+=Quty;
                Bill = Bill + Quty*360;
                NItems[7] = " Oriental Pizza ";
            break;

            case 4: 
                cout<<"\t\t\t\t How Many Pizza : ";
                cin>>Quty;
                IQuty[8]+=Quty;
                Bill = Bill + Quty*480;
                NItems[8] = " Indienne Pizza ";
            break;

            case 5: 
                cout<<"\t\t\t\t How Many Pizza : ";
                cin>>Quty;
                IQuty[9]+=Quty;
                Bill = Bill + Quty*380;
                NItems[9] = " Verduras Pizza ";
            break;

             case 0 : order=0; break;

             case 8:
               Bill=0;
                Cancel_order();
                char ch;
                 cout<<"\n\t\t\t\t __________| |        Youe Order Is Cancel Now          | |____________ \n";
                 cout<<"\n\t\t\t\t __________| |   What else do you want to order? Y/N    | |____________ \n";cin>>ch;
                 if(ch=='Y'||ch=='y')
                 {
                  main_menu();
                 } 
                 else if(ch=='N'||ch=='n') order=0;
              break;
           
            case 9 : main_menu(); break; 

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
       cout<<"\n\n \t\t\t\t\t\t Enter [9] To Go MAIN MENU ";
       cout<<"\n \t\t\t\t\t\t Confirm order [0] \n";
       cout<<"\n \t\t\t\t\t\t cancel order [8] \n";

         do
        {
          cout<<"\n \t\t\t\t Choice Order : ";
          cin>>order;
           switch (order)
           {
           case 1: 
                cout<<"\t\t\t\tHow Much Pasta : ";
                cin>>Quty;
                IQuty[10]+=Quty;
                Bill = Bill + Quty*125;
                NItems[10] = " Arabiata Pasta  ";
            break;

            case 2: 
                cout<<"\t\t\t\tHow Much Pasta : ";
                cin>>Quty;
                IQuty[11]+=Quty;
                Bill = Bill + Quty*150;
                NItems[11] = " Aglo Olio Pasta ";
            break;

            case 3: 
                cout<<"\t\t\t\tHow Much Pasta : ";
                cin>>Quty;
                IQuty[12]+=Quty;
                Bill = Bill + Quty*160;
                NItems[12] = " Quatro Formaggio Pasta ";
            break;

            case 4: 
                cout<<"\t\t\t\tHow Much Pasta : ";
                cin>>Quty;
                IQuty[13]+=Quty;
                Bill = Bill + Quty*280;
                NItems[13] = " Pesto Pepper Pasta ";
            break;

            case 5: 
                cout<<"\t\t\t\tHow Much Pasta : ";
                cin>>Quty;
                IQuty[14]+=Quty;
                Bill = Bill + Quty*180;
                NItems[14] = " Cheese Pasta ";
            break;

              case 0 : order=0; break;

             case 8:
                Bill=0;
                Cancel_order();
                char ch;
                 cout<<"\n\t\t\t\t __________| |   Youe all Item Order Is Cancel Now      | |____________ \n";
                 cout<<"\n\t\t\t\t __________| |   What else do you want to order? Y/N    | |____________ \n";cin>>ch;
                 if(ch=='Y'||ch=='y') main_menu();
                 else if(ch=='N'||ch=='n') order=0;
              break;
           
            case 9 : main_menu(); break; 
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
       cout<<"\n\n \t\t\t\t\t\t Enter [9] To Go MAIN MENU ";
       cout<<"\n \t\t\t\t\t\t Confirm order [0] \n";
       cout<<"\n \t\t\t\t\t\t cancel order [8] \n";

        do
        {
          cout<<"\n \t\t\t\t Choice Order : ";
          cin>>order;
           switch (order)
           {
           case 1: 
                cout<<"\t\t\t\t How Many Cups : ";
                cin>>Quty;
                IQuty[15]+=Quty;
                Bill = Bill + Quty*250;
                NItems[15] = " Cold Coffee  ";
            break;

            case 2: 
                cout<<"\t\t\t\t How Many Glass : ";
                cin>>Quty;
                IQuty[16]+=Quty;
                Bill = Bill + Quty*250;
                NItems[16] = "Fresh Fruit Juice";
            break;

            case 3: 
                cout<<"\t\t\t\t How Many Glass : ";
                cin>>Quty;
                IQuty[17]+=Quty;
                Bill = Bill + Quty*150;
                NItems[17] = " Fresh Lime Soda ";
            break;

            case 4: 
                cout<<"\t\t\t\t How Many Glass : ";
                cin>>Quty;
                IQuty[18]+=Quty;
                Bill = Bill + Quty*100;
                NItems[18] = " Masala Chaas Lassi ";
            break;

            case 5: 
                cout<<"\t\t\t\t How Many Cans : ";
                cin>>Quty;
                IQuty[19]+=Quty;
                Bill = Bill + Quty*170;
                NItems[19] = "Energy Drink (250 ml)";
            break;
               
             case 0 : order=0; break;

             case 8:
                Bill=0;
                Cancel_order();
                char ch;
                 cout<<"\n\t\t\t\t __________| |        Youe Order Is Cancel Now          | |____________ \n";
                 cout<<"\n\t\t\t\t __________| |   What else do you want to order? Y/N    | |____________ \n";cin>>ch;
                 if(ch=='Y'||ch=='y') main_menu();
                 else if(ch=='N'||ch=='n') order=0;
              break;
           
            case 9 : main_menu(); break; 

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
       cout<<"\n \t\t\t\t\t\t  [5] Green Apple Ice Cream    : 180 /- ";
       cout<<"\n\n \t\t\t\t\t\t Enter [9] To Go MAIN MENU ";
       cout<<"\n \t\t\t\t\t\t Confirm order [0] \n";
       cout<<"\n \t\t\t\t\t\t cancel order [8] \n";
   
        do
        {
          cout<<"\n \t\t\t\t Choice Order : ";
          cin>>order;
           switch (order)
           {
           case 1: 
                cout<<"\t\t\t\t How Many Cups  : ";
                cin>>Quty;
                IQuty[20]+=Quty;
                Bill = Bill + Quty*150;
                NItems[20] = " Mint Ice Cream ";
            break;

            case 2: 
                cout<<"\t\t\t\t How Many kulfi : ";
                cin>>Quty;
                IQuty[21]+=Quty;
                Bill = Bill + Quty*100;
                NItems[21] = " Malai kulfi ";
            break;

            case 3: 
                cout<<"\t\t\t\t How Many kulfi : ";
                cin>>Quty;
                IQuty[22]+=Quty;
                Bill = Bill + Quty*100;
                NItems[22] = "Mango kulfi  ";
            break;

            case 4: 
                cout<<"\t\t\t\t How Many Sizzling Brownie : ";
                cin>>Quty;
                IQuty[23]+=Quty;
                Bill = Bill + Quty*170;
                NItems[23] = "  Sizzling Brownie ";
            break;

            case 5: 
                cout<<"\t\t\t\t How Many Cups  : ";
                cin>>Quty;
                IQuty[24]+=Quty;
                Bill = Bill + Quty*180;
                NItems[4] = " Green Apple Ice Cream ";
            break;
              
              case 0 : order=0; break;

             case 8:
                Bill=0;
                Cancel_order();
                char ch;
                 cout<<"\n\t\t\t\t __________| |        Youe Order Is Cancel Now          | |____________ \n";
                 cout<<"\n\t\t\t\t __________| |   What else do you want to order? Y/N    | |____________ \n";cin>>ch;
                 if(ch=='Y'||ch=='y') main_menu();
                 else if(ch=='N'||ch=='n') order=0;
              break;
           
            case 9 : main_menu(); break; 

           }

        } while(order!=0);
          
     } // end fifth function


// =======================================================

void show_bill_Items()
{
  for (i=0;i<25;i++)
        {
            if (!NItems[i].empty())
            cout<<"\n \t\t\t : > " <<NItems[i]<<" \t\t ( "<<IQuty[i]<<" )";
        }
       cout<<endl; 
}


void Cancel_order()
{
   for(i=0;i<25;i++)
    {
      if(IQuty[i]>0)
      {
        NItems[i]="";
        IQuty[i]=0;
      }
    }
}

// =======================================================

};


int main ()
{
    menu_items R;

    R.Get_customer_info();
     
            R.main_menu();
            R.Dis_customer_info();
            R.show_bill_Items();
            R.Show_bill();
            cout<<endl;
            R.Thanks();
}
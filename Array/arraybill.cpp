#include<iostream>

using namespace std;

#define n 5

int main()
{
    int price[5]={700,100,5500,11000,8000},qut[5],amt[5],discamt[5],billamt[5];

    int discAtotal=0,gsttotal=0,billtotal=0;

    float disc[5],gst[5];
  
    int i;

    for (i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<"["<<i<<"]""Enter Keybord";
        }
        else if(i==1)
        {
            cout<<"["<<i<<"]""Enter Mouse  ";
        }
        else if(i==2)
        {
            cout<<"["<<i<<"]""Enter Moniter";
        }
        else if(i==3)
        {
            cout<<"["<<i<<"]""Enter CPU    ";
        }
        else if(i==4)
        {
            cout<<"["<<i<<"]""Enter RAM    ";
        }

        cout<<" Qut : ";
        cin>>qut[i];

        amt[i]=price[i]*qut[i];
        disc[i]=amt[i]*0.10;
        discamt[i]=amt[i]-disc[i];
        discAtotal+=discamt[i];
        gst[i]=discamt[i]*0.18;
        gsttotal+=gst[i];
        billamt[i]=discamt[i]+gst[i];
        billtotal+=billamt[i];
    }

    cout<<"Product\t\t Price\t Qut\t Amt\t Disc\tDiscAmt\tGst\tBillAmt";

    for (i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<"\n""["<<i<<"]""Keybord ";
        }
        else if(i==1)
        {
            cout<<"\n""["<<i<<"]""Mouse   ";
        }
        else if(i==2)
        {
            cout<<"\n""["<<i<<"]""Moniter ";
        }
        else if(i==3)
        {
            cout<<"\n""["<<i<<"]""CPU     ";
        }
        else if(i==4)
        {
            cout<<"\n""["<<i<<"]""RAM     ";
        }

        cout<<"\t "<<price[i]<<"\t "<<qut[i]<<"\t "<<amt[i]<<"\t "<<float(disc[i])<<"\t "<<discamt[i]<<"\t "<<float(gst[i])<<"\t "<<billamt[i]<<"\t";
    }
    
    cout<<"\n";
    cout<<"\t";
    cout<<"\t";
    cout<<"\t";
    cout<<"\t";
    cout<<"\t";
    cout<<"\t";
    cout<<discAtotal<<"  "<<gsttotal<<"  "<<billtotal;

}
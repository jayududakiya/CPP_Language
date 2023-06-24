#include<iostream>

using namespace std;


struct bill
{
    int qut,amt;
    float  dic ;   //5%
    float  gst ;   //18%
    int billamt,netbill;
};

int main()
{
    struct bill a[5];
	int rate=50;

     int i;

    for(i=0;i<2;i++)
    {
        cout<<"["<<i<<"]""Enter a Qut : ";
        cin>>a[i].qut;
    }

    for(i=0;i<2;i++)
    {
      a[i].amt = rate*a[i].qut;
      a[i].dic = (a[i].amt*5)/100;
      a[i].billamt = a[i].amt-a[i].dic;
      a[i].gst = (a[i].billamt*18)/100;
      a[i].netbill = a[i].billamt+a[i].gst;
    }

    cout<<"\nNo\tRate\tQut\tAmt\tDic\tBillAmt\tGst\tNetBill";

    for (i = 0; i < 2; i++)
    {
     cout<<"\n""["<<i<<"]""\t"<<rate<<"\t"<<a[i].qut<<"\t"<<a[i].amt<<"\t"<<a[i].dic<<"\t"<<a[i].billamt<<"\t"<<a[i].gst<<"\t"<<a[i].netbill;
    }
    
    
}

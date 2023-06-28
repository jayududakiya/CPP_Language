#include<iostream>

using namespace std;

class Books
{
    private: 
    int book_No;
    float price,total_cost;
    char book_Title[20];
    float cp_num,gst;  //12 %


    float Total_cost(float cp_num)
    {
       total_cost=cp_num*price;
       gst =total_cost*0.12;
    }

    public:
    
    float Purchase()
    {
        float copy_num;
        cout<<"How many copy do you want : ";
        cin>>copy_num;
        Total_cost(copy_num);
        cout<<endl<<"Total Cost to paid by use is : "<<total_cost;
        cout<<endl<<" GST on purchase is  : "<<gst;
        cout<<endl<<"Total Cost with GST  : "<<gst+total_cost;
    }

    void INPUT()
    {
        cout<<"Enter a Book No : ";
        cin>>book_No;
        cout<<"Enter a Book Title : ";
        cin>>book_Title;
        cout<<"Enter Book Price : ";
        cin>>price;
        Purchase();
    }


};


int main ()
{
    Books bill;

    bill.INPUT();
}
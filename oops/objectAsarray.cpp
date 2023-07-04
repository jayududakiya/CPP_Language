#include<iostream>

using namespace std;

class Box 
{
    int n;

    public :

    void setdata();
    void getdata();

};

void Box :: setdata()
{
    cout<<"Enter No : ";
    cin>>n; 
}

void Box :: getdata()
{
    cout<<" value of  : "<<n<<endl; 
}

int main ()
{
    Box a[5];
    int i;
   
    for (i=0;i<2;i++)
    {
        cout<<"No : "<<i+1<<endl;
        a[i].setdata();
    }

    for (i=0;i<2;i++)
    {
        cout<<"No :  [ "<<i+1<<" ]";
        a[i].getdata();
    }
    
}

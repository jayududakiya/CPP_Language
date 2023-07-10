#include<iostream>

using namespace std;


class base{
    protected:
    int n,i,squ;
    public:
    void setN()
    {
        cout<<"enter N : ";
        cin>>n;
    }
};
class derived : public base{
    public:
    void getN()
    {
     for(i=0;i<=n;i++)
    {
     squ=i*i;
     cout<<"Square of num [ "<<i<<" ] is : "<<squ<<endl;
    }
    }
};


int main()
{
    derived  N;
     N.setN();
     N.getN();
}
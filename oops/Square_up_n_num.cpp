#include<iostream>

using namespace std;


class base{
    protected:
    int n,i;
    public:
    void setN()
    {
        cout<<"enter n:";
        cin>>n;
    }
};
class derived : public base{
    public:
    void getN()
    {
     for(i=1;i<=n;++i)
    {
      cout<<"Square of num [ "<<i<<" ] is : "<<i*i<<endl;
    }
    }
};


int main()
{
    derived  N;
     N.setN();
     N.getN();
}
#include<iostream>

using namespace std;

class base1
{
    protected:
    int n;

    public:
    void setN()
    {
        cout<<"Enter N  : ";
        cin>>n;
    }
};

class base2 :public base1
{
    protected :
    int i=0, fact=1;

};

class derive : public base2{

    public:

    void get()
    {
     while(i<n)
     {
        i++;
        fact=fact*i;
     }
     cout<<"Factorial of NUmber [ "<<i<<" ] is : "<<fact<<endl;
    }
};

int main ()
{
    derive N;

    N.setN();
    N.get();
}
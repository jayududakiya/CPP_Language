#include<iostream>

using namespace std;

class box
{
    int x,y;
    friend box find(box t);

    public: 

    void input()
    {
        cout<<"Enter A : ";
        cin>>x;
        cout<<"Enter B : ";
        cin>>y;
    }


};

box find(box t)
{
   if(t.x > t.y)
     {
        cout<<"big number is A : "<<t.x<<endl;
     }

     else
     {
        cout<<"big number is B : "<<t.y<<endl;
     }

}

int main ()
{
    box c;

       c.input();

       find(c);
}



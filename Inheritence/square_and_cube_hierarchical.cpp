
// hierarchical inheritance 

#include<iostream>

using namespace std;

class Data
{
  protected:
     int n;

   public:
     void setN()
     {
        cout<<"Enter N : ";
        cin>>n;
     }

};

class Square : public Data 
{
 public:
    void Sum_Square()
    {
       cout<<"Square of ["<<n<<"] is : "<<n*n<<endl;
    }
};

class Cube : public Data 
{
 public:
    void Sum_Cube()
    {
       cout<<"Cube of ["<<n<<"] is : "<<n*n*n<<endl;
    }
};




int main ()
{
    Square N;
    N.setN();
    N.Sum_Square();

    Cube M;
    M.setN();
    M.Sum_Cube();
}
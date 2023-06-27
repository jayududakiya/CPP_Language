#include<iostream>

using namespace std;

class Student
{
    private:
    int adminNO,sci,maths,eng,total;
    float per; //percentage
    char name[20];

     float sum()
    {
      total=eng+maths+sci;
      per=(float)total/3;
      Show_data();
    }

    public:

    void Get_data()
    {
      cout<<"Enter Admin No :";
      cin>>adminNO;
      cout<<"Enter Name : ";
      cin>>name;
      cout<<"Enter Science marks : ";
      cin>>sci;
      cout<<"Enter Maths  marks : ";
      cin>>maths;
      cout<<"Enter English marks : ";
      cin>>eng;
      sum();
    }

    void Show_data()
    {
      cout<<"Admin No : "<<adminNO;
      cout<<endl;
      cout<<"Student Name : "<<name;
      cout<<endl;
      cout<<"Science  : "<<sci;
      cout<<endl;
      cout<<"Maths  : "<<maths;
      cout<<endl;
      cout<<"English  : "<<eng;
      cout<<endl;
      cout<<"Total Marks  : "<<total;
      cout<<endl;
      cout<<"Percentage  : "<<per<<"%";
      cout<<endl;
    }



};

int main()
{
  Student stu1;

  stu1.Get_data();
}
#include<iostream>

using namespace std;

class Result
{
    private:
    int science,maths,english,total;
    float per; //percentage
    char name[20];

    public:

    void Getdata(){
        cout<<"Enter Student Name :";
        cin>>name;
        cout<<endl;
        cout<<"Enter Science Marks :";
        cin>>science;
        cout<<endl;
        cout<<"Enter Maths Marks:";
        cin>>maths;
        cout<<endl;
        cout<<"Enter English Marks :";
        cin>>english;
        cout<<endl;
        Show_data();
    }



    void Show_data()
    {
        cout<<"Name : "<<name<<""<<endl;
        cout<<"Science marks : "<<science<<""<<endl;
        cout<<"Maths   marks : "<<maths<<""<<endl;
        cout<<"English marks : "<<english<<""<<endl;
        
    }
};

int main()
{
    Result stu;

    stu.Getdata();
}
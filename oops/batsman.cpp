#include<iostream>
#include<string>


using namespace std;

class batsman 
{
    private :
    int bcode;
    string bname;
    int innings,notout,runs;

    float batavg;

    float Calcavg()
    {

        return runs/(innings-notout);

    }

    public :

    void readdata(){
        cout<<"Enter Bats Man Code : ";
        cin>>bcode;

        cout<<"Enter Bats Man Name : ";
        cin>>bname;

        cout<<"Enter Batsman Innings :";
        cin>>innings;

        cout<<"Enter Batsman Notout :";
        cin>>notout;

        cout<<"Enter Batsman Runs :";
        cin>>runs;

        Display_data();
    }

    void Display_data()
    {
        cout<<"\t"<<endl;
        cout<<"Bats Man Code : "<<bcode;
        cout<<endl;
        cout<<"Bats Man Name : "<<bname;
        cout<<endl;
        cout<<"Batsman Innings :"<<innings;
        cout<<endl;
        cout<<"Batsman Notout :"<<notout;
        cout<<endl;
        cout<<"Batsman Runs :"<<runs;
        cout<<endl;
        batavg=Calcavg();
        cout<<"Calcavg      :"<<batavg;
        

    }

};

int main()
{
    batsman bats;

    bats.readdata();
}
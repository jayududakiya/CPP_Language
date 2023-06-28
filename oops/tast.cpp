#include<iostream>
#include<string>

using namespace std;

class Tast
{
private:
    int tastcode,NoCandidate,CenterReqd; 
    string Description; //  getline(cin ,Description); for tak a input string 

    float Calcntr()
    {
        return (NoCandidate/100+1);
    }
    
public:

  void Schedule()
   {
     cout<<"Enter a Tast Code : ";  //  230
     cin>>tastcode;  
     cout<<endl<<"Enter a Description : "; //  National Level Exam // Sem-V
     cin>>Description;
     cout<<endl<<"Enter a NoCandidate : ";  // i am Enter my set No 14611 
     cin>>NoCandidate;
     Disp_tast();
    }

   void Disp_tast()
    {
     cout<<"Tast Code : "<<tastcode;
     cout<<endl<<"Description : "<<Description;
     cout<<endl<<"NoCandidate : "<<NoCandidate;
     CenterReqd = Calcntr();
     cout<<endl<<"Your CenterReqd is : "<<CenterReqd;
    }
    
};


int main ()
{
    Tast exam;

    exam.Schedule();
}
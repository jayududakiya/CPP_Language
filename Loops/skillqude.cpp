#include<iostream>
using namespace std;
 
int main()
 {
  int i,j;

  char name[10]="SKILLQUDE";

   for(i=0;i<9;i++)
   {
     for(j=0;j<=i;j++)
     { 
        cout<<" "<<name[j];
     }
     cout<<"\n";
   }
 }
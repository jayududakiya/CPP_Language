#include<iostream>

using namespace std;

int main()
 {
  char i,letter;

  cout<<"Enter a Capital Alphabet Letter :";
  cin>>letter;

  if(letter<64 || letter>91)
  {
   cout<<"Enter a valid Alphabet letter ";
   cin>>letter;
  }

  for(i=65;i<=letter;i++)
  {
   cout<<" "<<i;
  }

 }
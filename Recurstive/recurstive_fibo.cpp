#include<iostream>

using namespace std ;

int fact(int a)
{
  if(a==0)
  {
    return 0; 
 }

  else if(a==1)
  {
    return 1; 
 }

 else
 {
    return fact(a-1)+fact(a-2);
 }

}

int  main()
{
    int n,i;
    cout<<"Enter a num : ";
    cin>>n;

    cout<<"\nFibonaci serise is : ";

    for (i=0;i<=n;i++)
    {
        cout<<" "<<fact(i);
    }
    
}
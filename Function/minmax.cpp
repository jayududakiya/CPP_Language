#include<iostream>
using namespace std;

#define n 5

int min_max(int array[])
{
    int i,min,max,num1,num2;

    max = array[0];
    min = array[0];

    for(i=0;i<n;i++)
    {
        if(array[i] > max )
        {
            max=array[i];
            num1=i;
        }

        if(array[i] < min )
        {
            min=array[i];
            num2=i;
        }
    }
    
    cout<<endl<<"["<<num1<<"] ""Maximum Number is : "<<max;
    cout<<endl<<"["<<num2<<"] ""Minimum Number is : "<<min;

}


int main()
{
    int num[n];

    for (int i=0;i<n;i++)
    {
        cout<<"Enter Numbr ""["<<i<<"] : ";
        cin>>num[i];
    }

    min_max(num);
    
}

#include<iostream>

using namespace std ;

int main()
{
    int eng[5],hin[5],mth[5],total,i;
 
   float pre;
  
     
    for(i=0;i<5;i++)
    {
      cout<<"["<<char(65+i)<<"]""English sub marks is : ";
      cin>>eng[i];

	  cout<<"["<<char(65+i)<<"]""Hindi sub marks is   : ";
      cin>>hin[i];

      cout<<"["<<char(65+i)<<"]""Mathas sub marks is  : ";
      cin>>mth[i];
	  
	  cout<<"\n";
    }

    for (i=0;i<5;i++)
    {
        total= eng[i]+hin[i]+mth[i];
		
		pre=(total*100)/300;
		
	
	 cout<<" \n Studant "  "["<<char(65+i)<<"]"  " Marks of English " "["<<eng[i]<<"]" " Hindi " "["<<hin[i]<<"]" " Mathas " "["<<mth[i]<<"]" " = Total is : "  "["<<total<<"]" " : pre " "["<<float(pre)<<"] : " ;
	
	    if(eng[i]<=33 || eng[i]>100 || hin[i]<=33 || hin[i]>100 || mth[i]<=33 || mth[i]>100 ){
			cout<<" studant is  fail ";
		}
		
		else if(pre>75)
		{
			cout<<" Grad is A++ ";
		}
		
		else if(pre>33 && pre<=50) 
		{
			cout<<" Grad is C ";
		}
		
		else if(pre>50 && pre<=65) 
		{
			cout<<" Grad is B ";
		}
 
        else if(pre>65 && pre<75) 
		{
			cout<<" Grad is A ";
		} 
		            
    }


}
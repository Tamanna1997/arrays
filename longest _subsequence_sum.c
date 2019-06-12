#include <stdio.h>

    int main() 
   {
	 int arr1[100]={1,0,1,1,0,1}, arr2[100]={1,0,1,1,0,0} ,a,b, maxlength=0;
	 
	
	 for(a=0;a<6;a++)
	 {
	     int sum1=0,sum2=0;
	     for(b=a;b<6;b++)
	     {
	         sum1+=arr1[b];
	         sum2+=arr2[b];
	   
	     
	 
	     if(sum1==sum2)
	     {
	         int length=b-a+1;
	         if(length>maxlength)
	         maxlength=length;
	     }
	     }
	 }
	     printf("%d",maxlength);
	     
	     
	 }
	 




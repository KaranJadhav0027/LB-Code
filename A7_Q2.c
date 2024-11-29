/*#######################################################################
 Accept the Amount in US dollar and return its corresponding value in indian currency

Input:Enter number 3
Output:Value in INR is 210

Input:Enter number 1200
Output:Value in INR is 84000

Input:Enter number 10
Output:Value in INR is 700

#######################################################################*/

#include<stdio.h>

#define DOLLAR 70;
int DollarToINR(int iNo)
{
   int  iValue=0;
   if(iNo<0)
   {
    iNo=-iNo;
   }
   iValue=iNo*DOLLAR;

    return iValue; 
}

int main()
{
    int iValue =0,iRat=0;

    printf("Enter number ");
    scanf("%d",&iValue);

   iRat= DollarToINR(iValue);

   printf("Value in INR is %d",iRat);
    return 0;
}


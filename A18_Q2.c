/*#######################################################################
   Accept amount in US dallar and return its corresponding value in india currency
   
Input:
Enter Number  of USD :1200
Output:
value in INR is  :84000 

Input:
Enter Number  of USD :3
Output:
value in INR is  :210


#######################################################################*/


#include<stdio.h>

int DollarToINR(int iNo)
{  
    int iRupees=70;

    return iRupees*iNo;
  
}
int main()
{
   int iValue=0,iRet=0;

   printf("Enter Number  of USD :");
   scanf("%d",&iValue);

   iRet= DollarToINR(iValue);
   printf("value in INR is  :%d",iRet);

    return 0;
}
/*#######################################################################
 Program to find Factorial of given number

Input:Enter number  : 5
Output:120

Input:Enter number  :4
Output: 24

Input:Enter number  : -4
Output:24

#######################################################################*/


#include<stdio.h>

int Factorial(int iNo)
{
     int iFact=1;
     int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
     for(iCnt=iNo;iCnt>0;iCnt--)
     {
        iFact=iFact*iCnt;
     }

 return iFact;
}
int main()
{
  int iValue =0,iRet=0;

  printf("Enter number  :");
  scanf("%d",&iValue);

  iRet= Factorial(iValue);

  printf("Factorial of number is %d\n",iRet);
    return 0;
}
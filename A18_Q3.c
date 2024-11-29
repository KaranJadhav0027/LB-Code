/*#######################################################################
   Program to find even factorial of given number

Input:
Enter number :-5
Output:
Even Factorial of Number is 8

Input:
Enter number :10
Output:
Even Factorial of Number is 384
#######################################################################*/


#include<stdio.h>

int EvenFactorial(int iNo)
{
  int iCnt=0;
  int iFact=1;

  if(iNo<0)
  {
    iNo=-iNo;
  }
  for(iCnt=1;iCnt<iNo;iCnt++) 
  { 
   if(iCnt%2==0)
   {
    iFact=iFact*iCnt;
   }

  }
  return iFact;

}
int main()
{
   int iValue=0,iRet=0;

   printf("Enter Number  :");
   scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);
    printf("Even Factorial of Number is %d",iRet);

    return 0;
}
/*#######################################################################
   Program to find Odd factorial of given number

Input:
Enter number :-5
Output:
Odd Factorial of Number is 15

Input:
Enter number :10
Output:
Odd Factorial of Number is 945
#######################################################################*/


#include<stdio.h>

int OddFactorial(int iNo)
{
  int iCnt=0;
  int iFact=1;

  if(iNo<0)
  {
    iNo=-iNo;
  }
  for(iCnt=1;iCnt<=iNo;iCnt++) 
  { 
   if(iCnt%2==1)
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

    iRet=OddFactorial(iValue);
    printf("Odd Factorial of Number is %d",iRet);

    return 0;
}
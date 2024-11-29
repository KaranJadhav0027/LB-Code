/*#######################################################################
   Program to which return difference between Even Factorial and  Odd factorial number

Input:
Enter number :-5
Output:
Factorial Difference is -7

Input:
Enter number :10
Output:
Factorial Difference is 2895
#######################################################################*/


#include<stdio.h>

int FactorialDiff(int iNo)
{
  int iCnt=0;
  int iEvenFact=1,iOddFact=1;

  if(iNo<0)
  {
    iNo=-iNo;
  }
  for(iCnt=1;iCnt<=iNo;iCnt++) 
  { 
   if(iCnt%2==1)
   {
    iOddFact=iOddFact*iCnt;
   }
   else
   {
    iEvenFact=iEvenFact*iCnt;
   }

  }
  return iEvenFact-iOddFact;

}
int main()
{
   int iValue=0,iRet=0;

   printf("Enter Number  :");
   scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);
    printf("Factorial Difference is %d",iRet);

    return 0;
}
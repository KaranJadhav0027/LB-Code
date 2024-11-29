/*#######################################################################
 Program which Accept number from user and return difference between aummation of all its factors and non factors.

Input:Enter number
      5
Outpur:Factorial Difference is :-7

Input:Enter number
      -5
Outpur:Factorial Difference is :-7

Input:Enter number
      10
Outpur:Factorial Difference is :2895

#######################################################################*/
#include<stdio.h>


int FactorialDiff(int iNo)
{
  int SumFact=1,OddFact=1;
     int iCnt=0,iDiff=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
     for(iCnt=iNo;iCnt>0;iCnt--)
     {
        if(iCnt%2==0)
        {
         SumFact=SumFact*iCnt;
        }
        else
        {
            OddFact=OddFact*iCnt;
        }
     }
     printf("%d  %d\n", SumFact,OddFact);
     iDiff= SumFact-OddFact;
     return iDiff;
}

int main()
{
    int iValue =0;
    int DiffOfFact=0;

    printf("Entr Number \n");
    scanf("%d",&iValue);

   DiffOfFact= FactorialDiff(iValue);
 
   printf("Factorial Difference is :%d\n",DiffOfFact);

    return 0;
}
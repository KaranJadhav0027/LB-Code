/*#######################################################################
 Program to find Odd  Factorial  sum of given number

Input:Enter number  : 5
Output:Odd Factorial number of is :15

Input:Enter number  :-5
Output:Odd Factorial number of is : 15

Input:Enter number  : 10
Output:Odd Factorial number of is :945

#######################################################################*/


#include<stdio.h>

int OddFactorial(int iNo)
{
     int iFact=1;
     int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
     for(iCnt=iNo;iCnt>0;iCnt--)
     {
        if(iCnt%2!=0)
        {
        iFact=iFact*iCnt;
        }
     }

 return iFact;
}
int main()
{
  int iValue =0,iRet=0;

  printf("Enter number  :");
  scanf("%d",&iValue);

  iRet= OddFactorial(iValue);

  printf("Odd Factorial number of is :%d\n",iRet);
    return 0;
}
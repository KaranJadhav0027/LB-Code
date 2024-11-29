/*#######################################################################
  A program which accept range from user and Display all number in between that range.

Input:Enter starting point :23
      Enter ending point :35
Output:35 34 33 32 31 30 29 28 27 26 25 24 23

Input:Enter starting point :12
      Enter ending point :12
Output:12

Input:Enter starting point :90
      Enter ending point :3
Output:Invalid Range

Input:Enter starting point :-51
      Enter ending point :-56
Output:Invalid Range

Input:Enter starting point :-10
      Enter ending point :2
Output: 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
#######################################################################*/

#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
    int iCnt =0;
    if(iStart>iEnd)
    {
        printf("Invalid Range");
    }

    for(iCnt=iEnd;iCnt>=iStart;iCnt--)
    {
        printf(" %d",iCnt);
    }
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}
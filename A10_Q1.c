/*#######################################################################
  A program which accept range from user and Display all number in between that range.

Input:Enter starting point :12
      Enter ending point :26
Output:12 13 14 15 16 17 18 19 20 21 22 23 24 25 26

Input:Enter starting point :12
      Enter ending point :12
Output:12

Input:Enter starting point :90
      Enter ending point :3
Output:Invalid Range

Input:Enter starting point :-3
      Enter ending point :4
Output:-3 -2 -1 0 1 2 3 4
#######################################################################*/

#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
    int iCnt =0;
    if(iStart>iEnd)
    {
        printf("Invalid Range");
    }

    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
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
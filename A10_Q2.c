/*#######################################################################
accept range from user and Display all even number in between that range.

Input:Enter starting point :12
      Enter ending point :19
Output:112 14 16 18

Input:Enter starting point :10
      Enter ending point :10
Output:10

Input:Enter starting point :56
      Enter ending point :4
Output:Invalid Range

Input:Enter starting point :-10
      Enter ending point :6
Output:-10 -8 -6 -4 -2 0 2 4 6
#######################################################################*/

#include<stdio.h>

void RangeDisplayEven(int iStart,int iEnd)
{
    int iCnt =0;
    if(iStart>iEnd)
    {
        printf("Invalid Range");
    }

    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if(iCnt%2==0)
        {
         printf(" %d",iCnt);
        }
    }
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}
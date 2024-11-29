/*#######################################################################
accept range from user and Return Addition of all number in between that range.

Input:Enter starting point :2
      Enter ending point :6
Output:Addition is 20

Input:Enter starting point :4
      Enter ending point :5
Output:9

Input:Enter starting point :56
      Enter ending point :4
Output:Invalid Range

Input:Enter starting point :-10
      Enter ending point :6
Output:Invalid Range
#######################################################################*/

#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{
    int iCnt =0;
    int iSum=0;
    if(iStart>iEnd)
    {
        printf("Invalid Range\n");
    }
    if(iStart<0)
    {
       printf("Invalid Range\n");
       return 0; 
    }

    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
       iSum+=iCnt;
    }
    return iSum;
}

int main()
{
    int iValue1=0,iValue2=0;
    int iRet=0;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);
    
    if(iRet>0)
    {
    printf("Addition is %d",iRet);
    }
    return 0;
}
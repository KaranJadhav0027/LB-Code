/*#######################################################################
 Accept the number from user and return summation of all its non Factors

Input:Enter number
      12
Outpur: 50

Input:Enter number
      10
Outpur: 37
#######################################################################*/

#include<stdio.h>

int SumNonFcat(int iNo)
{
     int iCnt=0;
     int iTotal=0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {   
             iTotal=iTotal+iCnt;
            //printf("%d ",iCnt);
        }
    }
    return iTotal;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet =SumNonFcat(iValue);

    printf("%d\n",iRet);

    return 0;
}
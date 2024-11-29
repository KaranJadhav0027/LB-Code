/*#######################################################################
 Accept the number from user and display its multiplication of Factors

Input:Enter number
      12
Outpur: 144
#######################################################################*/

#include<stdio.h>

int MultFcat(int iNo)
{
     int iCnt=0;
     int iTotal=1;

    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {   
             iTotal=iTotal*iCnt;
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

    iRet =MultFcat(iValue);

    printf("%d\n",iRet);

    return 0;
}
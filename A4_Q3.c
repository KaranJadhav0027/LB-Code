/*#######################################################################
 Program which Accept number from user and Display all its non Factors.

Input:Enter number
      12
Outpur: 5 7 8 9 10 11

Input:Entr Number
10
Output:3 4 6 7 8 9
#######################################################################*/
#include<stdio.h>

void NonFact(int iNo)
{
         int iCnt=0;
    
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt!=0 )
        {   
            printf("%d ",iCnt);
        }
    }
}
int main()
{
    int iValue =0;

    printf("Entr Number \n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}
/*#######################################################################
 Program Accept number from user and Display its Factor in Decrising
Input:Enter number
      12
Outpur: 6 4 3 2 1
#######################################################################*/
#include<stdio.h>

void FactRev(int iNo)
{
     int iCnt=0;
    
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(iCnt=iNo;iCnt<=iNo;iCnt--)
    {
        if(iNo%iCnt==0  && iCnt!=iNo)
        {   
            printf("%d ",iCnt);
        }
    }
}
int main()
{
    int iValue =0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    FactRev(iValue);
    return 0;
}
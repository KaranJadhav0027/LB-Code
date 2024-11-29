/*#######################################################################
 Accept the number from user and display its table in revers orders

Input:Enter number  : 5
Output :50 45 40 35 30 25 20 15 10 5

Input:Enter number  : -5
Output :50 45 40 35 30 25 20 15 10 5

#######################################################################*/

#include<stdio.h>

void Table(int iNo)
{
    int iCnt=0;
   
   if(iNo<0)
   {
    iNo=-iNo;
   }
    int iTable=1;
    for(iCnt=10;iCnt>0;iCnt--)
    { 
          iTable=iCnt*iNo;
          printf("%d ",iTable);
    }

}
int main()
{
    int iValue =0;
    printf("Enter number  : ");
    scanf("%d",&iValue);

    Table(iValue);
    return 0;
}
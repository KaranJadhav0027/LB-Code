/*#######################################################################
 Accept the Number from user and display its Table

Input:Enter number  : 6
Output :6 12 18 24 30 36 42 48 54 60

Input:Enter number  : -6
Output :6 12 18 24 30 36 42 48 54 60

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
    for(iCnt=1;iCnt<=10;iCnt++)
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
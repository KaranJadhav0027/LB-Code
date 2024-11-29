/*#######################################################################
 Accept the N from user and print first 5 multiple of N

Input:Enter number  : 5
Output :5 10 15 20 25

#######################################################################*/

#include<stdio.h>

void Table(int iNo)
{
    int iCnt=0;
  
    int iTable=1;
    for(iCnt=1;iCnt<=5;iCnt++)
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
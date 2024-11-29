/*#######################################################################
 Accept the number from user and display below pattern

Input:Enter number -5
Output:* * * * *  # # # # #

Input:Enter number 3
Output:* * *  # # #

Input:Enter number 6
Output:* * * * * *  # # # # # #

#######################################################################*/

#include<stdio.h>

void Display(int iNo)
{
   int  iCnt=0;
   if(iNo<0)
   {
    iNo=-iNo;
   }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
       printf("* ");
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
       printf(" #");
    }
}

int main()
{
    int iValue =0;

    printf("Enter number ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}


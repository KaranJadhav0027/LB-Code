/*#######################################################################
 Accept two number from user and display first number in Second number of time

Input:Enter Number     :12
      Enter Frequency  :5
Output: 12  12  12  12  12

Input:Enter Number     :-2
      Enter Frequency  :3
Output:   -2  -2  -2

Input:Enter Number     :-2
      Enter Frequency  :0
Output: 

#######################################################################*/

#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int iCnt=0;

    //Write update
    for(iCnt=1;iCnt<=iFrequency;iCnt++)
    {
        printf("  %d",iNo);
    }
    
}

int main()
{
   int iValue =0;
   int iCount =0;

   printf("Enter Number     :");
   scanf("%d",&iValue);

   printf("Enter Frequency  :");
   scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}
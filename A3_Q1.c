/*#######################################################################

Write a program which accept one number from user and print that number of even number on screen

Input:Enter number  :7
Output:2  4  6  8  10  12  14

Input:Enter number  :4
Output: 2  4  6  8

Input:Enter number  :-66
Output:Enter the number greater than zero(0) OR Positive Number
#######################################################################*/
#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        printf("Enter the number greater than zero(0) OR Positive Number");
        return;
    }
    int iCounter=0;
    iCounter=iNo*2;
    for(int iCnt=1;iCnt<=iCounter;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf(" %d ",iCnt);
        }
    }

}
int main()
{
    int iValue=0;

    printf("Enter number  :");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
/*#######################################################################
 Accept the N from user and print All odd number up to N 

Input:Enter number  : 18
Output :1  3  5  7  9  11  13  15  17

#######################################################################*/

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    { 
        if((iCnt%2)!=0)
        {
         printf("%d  ",iCnt); 
         //printf("%d  \n",iCnt); 
        }   
    }

}
int main()
{
    int iValue =0;
    printf("Enter number  : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    return 0;
}
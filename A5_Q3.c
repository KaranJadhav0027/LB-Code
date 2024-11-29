/*#######################################################################
 Accept the number from user and print it's number line 

Input:Enter number  : 4
Output :-4  -3  -2  -1  0  1  2  3  4

#######################################################################*/

#include<stdio.h>

void Table(int iNo)
{
     
    int iCnt=0;
    for(iCnt=-iNo;iCnt<=iNo;iCnt++)
    { 
     printf("%d  ",iCnt);  
     //printf("%d\n  ",iCnt);  
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
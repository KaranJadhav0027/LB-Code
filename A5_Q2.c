/*#######################################################################
 Accept the number from user and print number till that number 

Input:Enter number  : 6

Output: 1  2  3  4  5  6

#######################################################################*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
       
      printf("%d  ",iCnt);
      // printf("%d  \n",iCnt);

    }

}
int main()
{
    int iValue =0;
    printf("Enter number  : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
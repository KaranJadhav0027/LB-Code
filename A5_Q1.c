/*#######################################################################
 Accept the number from user and print that number of $ & * on screen

Input:Enter number  : 5
Output: $   *   $   *   $   *   $   *   $   *

Input:Enter number  : -4
Output:$   *   $   *   $   *   $   *

#######################################################################*/

#include<stdio.h>

void Pattern(int iNo)
{
     if(iNo<=0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
       //  printf("$   *   \n");
        printf("$   *   ");
         //printf("$ \n");
         // printf("*   \n");

    }

}
int main()
{
    int iValue =0;
    printf("Enter number  : ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}
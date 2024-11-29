/*#######################################################################
  
   Accept on number from user  & print that number of * on screen

Output:
    Enter Number
    6
    *  *  *  *  *  *   

  #######################################################################*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    //Write updater
    while(iCnt<iNo)
    {
        printf(" * ");
       iCnt++;
    }
}
int main()
{
    int iValue=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
/*#######################################################################
Accept on number from user  & print that number of * on screen

Output:
    Enter number
    5
     *  *  *  *  *
#######################################################################*/

#include<stdio.h>

void Display(int iNo)
{
    //write updater
    while(iNo>0)
    {
        printf(" * ");
        iNo--;
    }
}
int main()
{
   int iValue=0;

   printf("Enter number\n");
   scanf("%d",&iValue);

   Display(iValue);


    return 0;
}
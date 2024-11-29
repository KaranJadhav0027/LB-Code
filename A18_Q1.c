/*#######################################################################
   Accept number from user and Display below Pattern

Input:
Enter number :5
Output:
*       *       *       *       *       #       #       #       #      #

Input:
Enter number :-4
Output:
*       *       *       *       #       #       #       #
#######################################################################*/


#include<stdio.h>

void Display(int iNo)
{
  int iCnt=0;

  if(iNo<0)
  {
    iNo=-iNo;
  }
  for(iCnt=0;iCnt<iNo;iCnt++) 
  { 
   
    printf("*\t");
  }
  for(iCnt=0;iCnt<iNo;iCnt++) 
  { 
   
    printf("#\t");
  }
}
int main()
{
   int iValue=0;

   printf("Enter Number  :");
   scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
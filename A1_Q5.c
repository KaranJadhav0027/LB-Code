/*#######################################################################
  
   Accept one number from & print that number of * on screen

Output 1st:
      *  *  *  *  * 

Output 2nd:
      Enter the number of Star(*) you want
      6
      *  *  *  *  *  *

#######################################################################*/
  
#include<stdio.h>

void Accept(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf(" * ");
    }
}
int main()
{
    int iValue=0;
    //iValue=5;
   
   printf("Enter the number of Star(*) you want \n");
   scanf("%d",&iValue);

    Accept (iValue);
    return 0;
}
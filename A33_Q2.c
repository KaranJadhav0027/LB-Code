/*#######################################################################
 Write a program which Accept one number from user and off 7th
 bit of that number if it on Return modified number

Input:
Enter number :
577
OutPut:
Modified Value  :1
#######################################################################*/

#include <stdio.h>

int OffBit(int iNo)
{
   int iMask = 0xFFFFFDBF;
    int iResult = 0;

    iResult=iNo&iMask;   
  return iResult;

}
int main()
{
    
    int iValue = 0;
    int iRet=0;
    
     printf("Enter number :\n");
      scanf("%d",&iValue);

    iRet = OffBit(iValue);

    
        printf("Modified Value  :%d\n",iRet);
    
   

    return 0;
}
/*#######################################################################
 Write a program which Accept one number from user and toggle 7th and 10th
 bit of that number if it on Return modified number

Input:
Enter number :137
OutPut:
Modified Value  :713
#######################################################################*/

#include <stdio.h>

int ToggleBit(int iNo)
{
   int iMask = 0x240;
    int iResult = 0;

    iResult=iNo^iMask;   
  return iResult;

}
int main()
{
    
    int iValue = 0;
    int iRet=0;
    
     printf("Enter number :\n");
      scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    
        printf("Modified Value  :%d\n",iRet);
    
   

    return 0;
}
/*#######################################################################
 Write a program which Accept one number from user and on its first 4th bits Return modified number

Input:
Enter number :73
OutPut:
Modified Value  :79
#######################################################################*/

#include <stdio.h>

int OnBit(int iNo)
{
   int iMask = 0x0f;
    int iResult = 0;

    iResult=iNo|iMask;   
  return iResult;

}
int main()
{
    
    int iValue = 0;
    int iRet=0;
    
     printf("Enter number :\n");
      scanf("%d",&iValue);

    iRet = OnBit(iValue);

    
        printf("Modified Value  :%d\n",iRet);
    
   

    return 0;
}
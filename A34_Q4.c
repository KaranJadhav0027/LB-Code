/*#######################################################################
 Write a program which Accept one number from user and Position from user and toggle
 that bit.return modified number

Input:
Enter number :
10
Enter Bit Location :
3
OutPut:
Modified Number :14

#######################################################################*/

#include <stdio.h>

int ToggleBit(int iNo,int iPos)
{
    int iMask = 0x1;   
    int iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo | iMask;

    
         iResult=iNo^iMask;   
         return iResult;
}
int main()
{
    
    int iValue = 0,iLocation=0;
    int iRet=0;
    
     printf("Enter number :\n");
      scanf("%d",&iValue);

       printf("Enter Bit Location :\n");
      scanf("%d",&iLocation);

    iRet = ToggleBit(iValue,iLocation);

    
        printf("Modified Number :%d",iRet);


    return 0;
}
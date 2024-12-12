/*#######################################################################
 Write a program which Accept one number from user and Position from user and 
 check whether bit at that position is on or off. if bit is one return TRUE otherwise
 return false

Input:
Enter number :
10
Enter Bit Location :
2
OutPut:
Bit is ON

#######################################################################*/

#include <stdio.h>
#include<stdbool.h>

bool chkBit(int iNo,int iPos)
{
    int iMask = 0x1;   
    int iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

    if (iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    
    int iValue = 0,iLocation=0;
    bool bRet=0;
    
     printf("Enter number :\n");
      scanf("%d",&iValue);

       printf("Enter Bit Location :\n");
      scanf("%d",&iLocation);

    bRet = chkBit(iValue,iLocation);

    
        if (bRet == true)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }
    
   

    return 0;
}
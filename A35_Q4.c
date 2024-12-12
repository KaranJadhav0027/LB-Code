/*#######################################################################
 Write a program which Accept one number two Position from user and  check
 whether bit at first or bit at second position is ON or OFF

Input:
Enter number :
10
Enter first Bit Location :
3
Enter Second Bit Location :
7
OutPut:

bit is ON


#######################################################################*/

#include <stdio.h>
#include<stdbool.h>

bool ChkBit(int iNo, int iPos1, int iPos2)
{
    int iMask1 = 1 << (iPos1 - 1) - 1;
    int iMask2 = 1 << (iPos2 - 1) - 1;
    int iResult1 = 0, iResult2 = 0;

    iResult1 = iNo & iMask1;

    iResult2 = iNo & iMask2;

    if (iResult1 == iMask1 || iResult2 == iMask2)
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

    int iValue = 0, iLocation1 = 0, iLocation2 = 0;
    bool bRet = false;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    printf("Enter first Bit Location :\n");
    scanf("%d", &iLocation1);

    printf("Enter Second Bit Location :\n");
    scanf("%d", &iLocation2);

    bRet = ChkBit(iValue, iLocation1, iLocation2);

    if(bRet==true)
    {
        printf("bit is ON\n");
    }
    else
    {
        printf("bit is OFF\n");
    }
   


    return 0;
}
/*#######################################################################
 Write a program which Accept one number from user and toggale contents of first and
 last nibble of the number return modified number(nibble is a group of four bits)

Input:
Enter number :
10
Enter Bit Location :

OutPut:
Modified Number :14

#######################################################################*/

#include <stdio.h>

int ToggleBit(int iNo)
{
    int iMask = 0xF000000F;
    int iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}
int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = ToggleBit(iValue);

    printf("Modified Number :%d", iRet);

    return 0;
}
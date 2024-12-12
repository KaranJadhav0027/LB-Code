/*#######################################################################
 Write a program which Accept one number from user and range of positions
 form user Toggle all bits from that range

Input:
Enter number :
897
Enter first Bit Location :
9
Enter Second Bit Location :
13
OutPut:
Toggle all bits position 9 to 13 of input number is 7297


#######################################################################*/

#include <stdio.h>

unsigned int ToggleBitRange(unsigned int iNo, int iStart, int iEnd)
{
    unsigned int iMask = 0;
    int iCnt = 0;
   unsigned int iResult;

        if (iStart < 1 || iEnd < 1 || iStart > 32 || iEnd > 32 || iStart > iEnd)
    {
     printf("invalid range");
    }

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iMask = iMask | (1 << (iCnt - 1));
    }
    iResult = iNo ^ iMask;
    return iResult;
}
int main()
{

    unsigned int iValue = 0;
    int iLocation1 = 0, iLocation2 = 0;
    unsigned iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    printf("Enter first Bit Location :\n");
    scanf("%d", &iLocation1);

    printf("Enter Second Bit Location :\n");
    scanf("%d", &iLocation2);

    iRet = ToggleBitRange(iValue, iLocation1, iLocation2);

printf("Toggle all bits position %d to %d of input number is %u\n", iLocation1, iLocation2, iRet);
    return 0;
}
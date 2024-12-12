/*#######################################################################
 Write a program which Accept one number from user and Count number of ON(1)
 bits in it without using % and / Operater

Input:
Enter number :
11

OutPut:
Modified Number :3

#######################################################################*/

#include <stdio.h>

int CounterOne(int iNo)
{
    int iCount = 0;

    while (iNo != 0)
    {
        if (iNo != 1)
        {
            iCount++;
        }
        iNo = iNo >> 1;
    }
    return iCount;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = CounterOne(iValue);

    printf("Modified Number :%d", iRet);

    return 0;
}
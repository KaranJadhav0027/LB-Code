/*#######################################################################
 Write a program which Accept two number from user and Display position of 
 Common ON bits from that two numbers.

Input:
Enter First number :
10
Enter First number :
15
OutPut:
Common ON bit:
2 4


#######################################################################*/

#include <stdio.h>

int CommonBit(int iNo,int iNo2)
{
    int iCommon =iNo & iNo2;
    int iPos=1;

   printf("Common ON bit:\n");
    while (iCommon != 0)
    {
        if(iCommon & 1)
        {
            printf("%d ",iPos);
        }
        iCommon=iCommon>>1;
        iPos++;
    }
    printf("\n");

}
int main()
{

    int iValue1 = 0, iValue2 = 0;

    printf("Enter First number :\n");
    scanf("%d", &iValue1);

    printf("Enter First number :\n");
    scanf("%d", &iValue2);

    CommonBit(iValue1, iValue2);

    return 0;
}
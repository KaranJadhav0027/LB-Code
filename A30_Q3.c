/*#######################################################################
    Accept character from user and check whether it is Digit or not(0-9).

Input:
Enter the character :9
Output:
9 is Digit

Input:
Enter the character :K
Output:
K is not Digit
#######################################################################*/

#include <stdio.h>
#include <stdbool.h>

bool ChkDigit(char ch)
{
    bool bFlage = false;

    if (ch >= '0' && ch <= '9' )
    {
        bFlage = true;
      
    }
    return bFlage;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character :");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if (bRet == true)
    {
        printf("%c is Digit",cValue);
    }
    else
    {
        printf("%c is not Digit" ,cValue);
    }

    return 0;
}
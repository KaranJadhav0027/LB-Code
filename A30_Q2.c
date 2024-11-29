/*#######################################################################
    Accept character from user and check whether it is capital or not (A-Z)

Input:
Enter the character :K
Output:
K is Capital Character

Input:
Enter the character :d
Output:
d is not Capital Character
#######################################################################*/

#include <stdio.h>
#include <stdbool.h>

bool ChkCapital(char ch)
{
    bool bFlage = false;

    if (ch >= 'A' && ch <= 'Z' )
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

    bRet = ChkCapital(cValue);

    if (bRet == true)
    {
        printf("%c is Capital Character",cValue);
    }
    else
    {
        printf("%c is not Capital Character" ,cValue);
    }

    return 0;
}
/*#######################################################################
    Accept character from user and check whether it is Small case or not (a-z)

Input:
Enter the character :K
Output:
K is not a small case Character

Input:
Enter the character :d
Output:
k is small case Character
#######################################################################*/

#include <stdio.h>
#include <stdbool.h>

bool ChkSmall(char ch)
{
    bool bFlage = false;

    if (ch >= 'a' && ch <= 'z' )
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

    bRet = ChkSmall(cValue);

    if (bRet == true)
    {
        printf("%c is small case Character",cValue);
    }
    else
    {
        printf("%c is not a small case Character" ,cValue);
    }

    return 0;
}
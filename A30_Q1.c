/*#######################################################################
    Accept character from user and check whether it is alphabet or not (A-Z,a-z)

Input:
Enter the character :#
Output:
# is not Character

Input:
Enter the character :A
Output:
A is Character
#######################################################################*/

#include <stdio.h>
#include <stdbool.h>

bool ChkAlpha(char ch)
{
    bool bFlage = false;

    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
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

    bRet = ChkAlpha(cValue);

    if (bRet == true)
    {
        printf("%c is Character",cValue);
    }
    else
    {
        printf("%c is not Character" ,cValue);
    }

    return 0;
}
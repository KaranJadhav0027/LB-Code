/*#######################################################################
    Accept String from user and accept one character check whether that character is 
    present is string or not

Input:
Enter the string    :Marvellous Multi OS
Enter the character :e
Output:
Character  found
#######################################################################*/


#include <stdio.h>
#include <stdbool.h>

bool ChkChar(char *str, char ch)
{
    bool bValue = false;

    while (*str != '\0')
    {
        if (*str ==ch)
        {
            bValue = true;
            break;
        }
        str++;
    }
    return bValue;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the string    :");
    scanf("%[^'\n']s", arr);

    printf("Enter the character :");
    scanf(" %c",&cValue); 
        // " %c"  tukar padhat
    bRet = ChkChar(arr, cValue);

    if (bRet == true)
    {
        printf("Character  found");
    }
    else
    {
        printf("Character  not found");
    }

    return 0;
}
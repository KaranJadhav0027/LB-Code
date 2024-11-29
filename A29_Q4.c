/*#######################################################################
    Accept String from user and accept one character .Return index of last occurrance  of that character

Input:
Enter the string    :Marvellous Multi OS
Enter the character :w
Output:
First Occurrence of Character  :-1

Input:
Enter the string    :Marvellous Multi OS
Enter the character :M
Output:
Character frequency is  :11
#######################################################################*/

#include <stdio.h>

int ChkChar(char *str, char ch)
{
    int iCounter = 0;
    int iLastOcc = -1;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            iLastOcc = iCounter;
        }
        str++;
        iCounter++;
    }

    return iLastOcc;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string    :");
    scanf("%[^'\n']s", arr);

    printf("Enter the character :");
    scanf(" %c", &cValue);
    // " %c"  tukar padhat
    iRet = ChkChar(arr, cValue);

    printf("last Occurrence of Character  :%d", iRet);

    return 0;
}
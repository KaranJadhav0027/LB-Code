/*#######################################################################
    Accept String from user and accept one character .Return frequency of that character

Input:
Enter the string    :Marvellous Multi OS
Enter the character :M
Output:
Character frequency is  :2

Input:
Enter the string    :Marvellous Multi OS
Enter the character :W
Output:
Character frequency is  :0
#######################################################################*/

#include <stdio.h>

int ChkChar(char *str, char ch)
{
    int iCounter = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCounter++;
        }
        str++;
    }
    return iCounter;
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

    printf("Character frequency is  :%d",iRet);
    
    return 0;
}
/*#######################################################################
    Accept String from user and accept one character .Return index of first occurrance  of that character

Input:
Enter the string    :Marvellous Multi OS
Enter the character :e
Output:
First Occurrence of Character  :4

Input:
Enter the string    :Marvellous Multi OS
Enter the character :W
Output:
Character frequency is  :-1
#######################################################################*/

#include <stdio.h>

int ChkChar(char *str, char ch)
{
    int iCounter = 0;
    int iFirstOcc=-1;

    while (*str != '\0')
    {
        if (*str == ch)
        {
           iFirstOcc=iCounter;
            break;
        }
        str++;
        iCounter++;
    }

    return iFirstOcc;
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

    printf("First Occurrence of Character  :%d",iRet);
    
    return 0;
}
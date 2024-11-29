/*#######################################################################
    Accept String from user and return difference between frequency of small character
    and frequency of capital character

Input:
Enter string :
MarvellouS
Output:
Difference :6

#######################################################################*/

#include <stdio.h>

int Difference(char *str)
{
    int iCaptial = 0, iSmall = 0;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            iCaptial++;
        }

        str++;
    }
    return iSmall - iCaptial;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("Difference :%d", iRet);

    return 0;
}
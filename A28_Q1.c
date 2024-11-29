/*#######################################################################
    Accept String from user and convert it into lower case

Input:
Enter string :
Marvellous Multi OS
Output:
Modified string is : marvellous multi os

#######################################################################*/

#include <stdio.h>

void strlwrX(char *str)
{

    while (*str != '\0')
    {

        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }

        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string :\n");
    scanf("%[^'\n']s", arr);

    strlwrX(arr);

    printf("Modified string is : %s", arr);

    return 0;
}
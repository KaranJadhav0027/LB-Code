/*#######################################################################
    Accept String from user and  into toggle case

Input:
Enter string :
Marvellous Multi OS
Output:
Modified string is :
 mARVELLOUS mULTI os

#######################################################################*/

#include <stdio.h>

void strtoggleX(char *str)
{

    while (*str != '\0')
    {

        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string :\n");
    scanf("%[^'\n']s", arr);

    strtoggleX(arr);

    printf("Modified string is : \n%s", arr);

    return 0;
}
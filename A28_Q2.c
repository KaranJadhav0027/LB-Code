/*#######################################################################
    Accept String from user and convert it into upper case

Input:
Enter string :
Marvellous Multi OS
Output:
Modified string is :
 ARVELLOUS MULTI OS

#######################################################################*/

#include <stdio.h>

void struprX(char *str)
{

    while (*str != '\0')
    {

        if (*str >= 'a' && *str <= 'z')
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

    struprX(arr);

    printf("Modified string is :\n %s", arr);

    return 0;
}
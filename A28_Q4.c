/*#######################################################################
    Accept String from user and display only digit from that string

Input:
Enter string :
marve89llous121
Output:
Modified string is :
89121

#######################################################################*/

#include <stdio.h>

void strtoggleX(char *str)
{
    char *cNo = str;
    while (*str != '\0')
    {

        if (*str >= '0' && *str <= '9')
        {
            *cNo = *str;
            cNo++;
        }
          str++;
    }
    *cNo = '\0';
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
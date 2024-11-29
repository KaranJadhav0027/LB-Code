/*#######################################################################
    Accept String from user and count number of capital characters

Input:
Enter string :
Karan Sanjay Jadhav
Output:
Capital Latter :3

Input:
Enter string :
Marvellous Multi OS
Output:
Capital Latter :4

#######################################################################*/

#include <stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s", arr);

    iRet = CountCapital(arr);

    printf("Capital Latter :%d", iRet);

    return 0;
}
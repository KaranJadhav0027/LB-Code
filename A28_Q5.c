/*#######################################################################
    Accept String from user and count number of white spaces

Input:
Enter string :
Marvellous Infosystem

Output:
white Space :
1

Input:
Enter string :
Marvellous Infosystem by Piyush Manohar Khairnnar
Output:
white Space :
5

#######################################################################*/

#include <stdio.h>

int strtoggleX(char *str)
{
    int iCounter=0;
    while (*str != '\0')
    {

        if (*str==' ')
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
    int iRet=0;

    printf("Enter string :\n");
    scanf("%[^'\n']s", arr);

   iRet= strtoggleX(arr);

    printf("white Space : \n%d", iRet);

    return 0;
}
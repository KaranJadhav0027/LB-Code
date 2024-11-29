/*#######################################################################
    Accept character from user if character is small display its corresponding
    caplital character and if it small then display its corresponding captial value
    in other case display as it is.

Input:
Enter the Character :
K
Output:k

Input:
Enter the Character :
j
Output:J

Input:
Enter the Character :
4
Output:4

Input:
Enter the Character :
%
Output:%
#######################################################################*/

#include <stdio.h>

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("%c", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("%c", ch);
    }
    else
    {
        printf("%c", ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the Character :\n");
    scanf("%c", &cValue);

    Display(cValue);
    return 0;
}
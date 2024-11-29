/*#######################################################################
    AcceptString from user and check whether it contain vowels in it or not



Input:
Enter the Character :
Marvellous
Output:Contains Vowel.

Input:
Enter the Character :
xyz
Output:There is no Vowel.
#######################################################################*/

#include <stdio.h>
#include <stdbool.h>

bool ChkVowel(char *str)
{
    bool bValue = false;
    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            bValue = true;
            break;
        }

        str++;
    }
    return bValue;
}
int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter the String :\n");
    scanf("%s", &arr);

    bRet = ChkVowel(arr);

    if (bRet == true)
    {
        printf("Contains Vowel.");
    }
    else
    {
        printf("There is no Vowel.");
    }
    return 0;
}
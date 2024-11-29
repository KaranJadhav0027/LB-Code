/*#######################################################################
Accept one character from user ans convert case of that character

Input:Enter Character
K
Output:k

Input:Enter Character
A
Output:a
 
#######################################################################*/
#include<stdio.h>

void DisplayConvert(char CValue)
{
     // by using ASCII value A=56  & Z =90
    if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c", CValue + 32);
    }
    // by using ASCII value a=97  & z= 122
    else  if(CValue >= 'a' && CValue <= 'z')
    {
       printf("%c", CValue - 32);
    }
}
int main()
{
    char cValue ='\0';

    printf("Enter Character \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}
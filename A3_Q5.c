/*#######################################################################
Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not

Input:Enter Character
K
Output:It is Not Vowel(console)

Input:Enter Character
A
Output:It is Vowel
#######################################################################*/
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
    if(CValue=='a' || CValue=='e' ||CValue=='i' ||CValue=='o' ||CValue=='u' ||CValue=='A'|| CValue=='e' ||CValue=='i' ||CValue=='o' ||CValue=='u' )
    {
        return TRUE;
    }
    else
    {
      return FALSE;
    }

}
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter Character\n");
    scanf("%c", &cValue);

    bRet=ChkVowel(cValue);
    {
        if(bRet==TRUE)
        {
            printf("It is Vowel");
        }
        else
        { 
          printf("It is Not Vowel(console)");
        }
    }
    return 0;
}

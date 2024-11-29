/*#######################################################################
    Accept character from user and check wheather it is special symbol or not



Input: 
Enter the Character :
$
Output:It is special character'

Input: 
Enter the Character :
k
Output:It is Not special character'
#######################################################################*/


#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch) 
{
    bool bValue=false;

    if(ch=='!' || ch== '@' || ch=='$' || ch== '%' || ch=='^' || ch== '&' ||ch=='*') 
     {
        bValue= true;
     }
 return bValue;
     
}
int main()
{
    char cValue='\0';
    bool bRet=false;

    printf("Enter the Symbol :\n");
    scanf("%c",&cValue);

    bRet=ChkSpecial(cValue);

    if(bRet==true)
    {
        printf("It is special character'");
    }
    else
    {
        printf("It is Not special character'");
    }
    return 0;
}
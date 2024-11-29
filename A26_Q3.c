/*#######################################################################
    Accept character from user if character is small  then print all the character in revers order
 if captial value then display all the character till Z
    in other case display as it is.

Input: 
Enter the Character :
Q
Output:Q R S T U V W X Y Z

Input: 
Enter the Character :
m
Output:m l k j i h g f e d c b a

Input: 
Enter the Character :
%
Output:%
#######################################################################*/


#include<stdio.h>

void Display(char ch) 
{
    if(ch>='A' &&ch<='Z')
     {
         while(ch<='Z')
         {
           printf("%c ",ch);
           ch++;
         }
     }
     else if(ch>='a' && ch<='z')
     {
         while(ch>='a')
         {
           printf("%c ",ch);
           ch--;
         }
     }
     else
     {
        printf("%c ",ch);
     }
}
int main()
{
    char cValue='\0';

    printf("Enter the Character :\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}
/*#######################################################################
    Accept character from user and display its ASCII value in decimal octal 
    and Hexadecimal format

Input: 
Enter the Character :
A
Output:
Decimal      : 65
Octal        :41
Hexadecimal  :101
#######################################################################*/


#include<stdio.h>


void Display(char ch)
{
    char iCnt='\0';
    for(iCnt=0;iCnt<=127;iCnt++)
    { 
     if(ch==iCnt)  
      {            
              printf("Decimal      :%3d\t\n",iCnt);
              printf("Octal        :%02X\t\n",iCnt);
              printf("Hexadecimal  :%o\t\n",iCnt);
              break;
         }
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
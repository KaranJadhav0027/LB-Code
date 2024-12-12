/*#######################################################################
   Write a program which Accept String from user and copy that characeter of that
   string into string into another string by converting all small
   character into capital case

Input:Marvellous Python  2

Output:MARVELLOUS PYTHON  2

#######################################################################*/

#include<stdio.h>

void StrCpyCap(char *str,char *dest)
{
   while(*str!='\0')
   {
     if (*str >= 'a' && *str <= 'z')
        {
            *dest = *str - 32;
         
        }
    else
       {
           *dest=*str;
        }
    str++;
    dest++;
   }
    *dest='\0';
}

int main()
{
   char Arr[30]="Marvellous Python  2";
   char Brr[30];

   StrCpyCap(Arr,Brr);

   printf("%s",Brr);

    return 0;
}
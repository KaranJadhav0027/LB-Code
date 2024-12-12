/*#######################################################################
   Write a program which Accept String from user and copy that characeter of that
   string into string into another string by converting all capital character
   into small case
  

Input:Marvellous Python  2

Output:marvellous python  2

#######################################################################*/

#include<stdio.h>

void StrCpySmall(char *str,char *dest)
{
   while(*str!='\0')
   {
     if (*str >= 'A' && *str <= 'Z')
        {
            *dest = *str + 32;
         
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

   StrCpySmall(Arr,Brr);

   printf("%s",Brr);

    return 0;
}
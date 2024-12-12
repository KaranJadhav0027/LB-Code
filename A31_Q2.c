/*#######################################################################
   Write a program which Accept String from user and copy that characeter of that
   string into string into another string by removing all white space

Input:Marvel lous Pyt  hon

Output:MarvellousPython

#######################################################################*/

#include<stdio.h>

void StrCpyX(char *str,char *dest)
{
   while(*str!='\0')
   {
    if(*str !=' ')
    {
        *dest=*str;
        dest++;
    }
    str++;
   }
    *dest='\0';
}

int main()
{
   char Arr[30]="Marvel lous Pyt  hon";
   char Brr[30];

   StrCpyX(Arr,Brr);

   printf("%s",Brr);

    return 0;
}
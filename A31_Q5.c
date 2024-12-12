/*#######################################################################
   Write a program which Accept String from user and copy that characeter of that
   string into string into another string by taggling the case 
  
  

Input:Marvellous Python 2

Output:mARVELLOUS pYTHON 2

#######################################################################*/

#include<stdio.h>

void StrCpyToggle(char *str,char *dest)
{
   while(*str!='\0')
   {
     if (*str >= 'A' && *str <= 'Z')
        {
            *dest = *str + 32;
         
        }
     else if (*str >= 'a' && *str <= 'z')
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
   char Arr[30]="Marvellous Python 2";
   char Brr[30];

   StrCpyToggle(Arr,Brr);

   printf("%s",Brr);

    return 0;
}
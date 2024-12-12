/*#######################################################################
   Write a program which Accept String from user and copy that characeter of that
   string into string into another string in revers order

Input:Marvellous Python

Output:nohtyP suollevraM

#######################################################################*/

#include<stdio.h>

void StrCpyRev(char *str,char *dest)
{
    char *end=str;
    
  while(*end !='\0')
    {
      end++;
    }
    end--;
   

    while(end>=str)
   {
    *dest=*end;
       dest++; 
      end--;
   }
   *dest='\0';

}

int main()
{
   char Arr[30]="Marvellous Python";
   char Brr[30];

   StrCpyRev(Arr,Brr);

   printf("%s",Brr);

    return 0;
}
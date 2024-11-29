/*#######################################################################
    Accept String from user reverse that string in place

Input:
Enter the string    :abcd
Output:
Modified String is   :dcba

Input:
Enter the string    :NARAK
Output:
Modified String is   :KARAN

#######################################################################*/

#include <stdio.h>

void StrRevX(char *str)
{
    char *cStart=str,*cEnd=str;
    char temp='\0';

    while (*cEnd != '\0')
    {
       cEnd++;
    }
    cEnd--;
     while(cStart<cEnd)
   {
    temp=*cStart;
     *cStart=*cEnd;
     *cEnd=temp;

     cStart++;
     cEnd--;
   }
    
} 

int main()
{
    char arr[20];
    printf("Enter the string    :");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    printf("Modified String is   :%s",arr);

    return 0;
}
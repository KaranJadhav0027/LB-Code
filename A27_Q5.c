/*#######################################################################
    Accept String from user and display  it in revese order

Input:
Enter string :
MarvellouS
Output:
SuollevraM

#######################################################################*/

#include <stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end=str;
    char temp='\0';

    while(*end !='\0')
    {
      end++;
    }
    end--;
   

    while(start<end)
   {
    temp=*start;
     *start=*end;
     *end=temp;

     start++;
     end--;
   }

}

int main()
{
    char arr[20];

    printf("Enter string :\n");
    scanf("%[^'\n']s", arr);

    Reverse(arr);
    printf("%s\n",arr);

    return 0;
}
/*#######################################################################

 Accept on number from user if number is less than 10 then print "Hello" otherwise print "Demo"

Output 1st:

Enter Number
7
Hello

Output 2nd:
Enter Number
25
Demo
#######################################################################*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello");
    }
    else
    {
       printf("Demo");
    }
}
int main()
{

    int iValue=0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
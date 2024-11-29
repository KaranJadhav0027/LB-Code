/*#######################################################################
 Accept the number from user if Numbe is less than 50  printf "Small", 
 if it is grater than 50 and less than 100 print "madium",
 if it is greater than 100 print "large".

Input:Enter number  : 4
Output:Small

Input:Enter number  : 66
Output:medium

Input:Enter number  : 8765
Output:Large

Input:Enter number  : -8765
Output:enter number greater than 0

#######################################################################*/

#include<stdio.h>

void Number(int iNo)
{
     if(iNo>=0 && iNo<=50)
     {
        printf("Small");
     }
     else if (iNo>50 && iNo<=100)
     {
        printf("medium");
     }
     else if (iNo>=100)
     {
        printf("Large");
     }
     else
     {
        printf("enter number greater than 0");
     }
    

}
int main()
{
    int iValue =0;
    printf("Enter number  : ");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;
}
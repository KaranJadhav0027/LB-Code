/*#######################################################################

 Accept number from the user and check whether number is even or odd

Input:Enter number  :55
Output:Given number is odd number

Input:Enter number  :26
Output:Given number is even number

Input:Enter number  :-54
Output:Given number is even number

Input:Enter number  :.76
Output:Given number is even number
#######################################################################*/


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEvent(int iNo)
{
    //Logic
    if(iNo%2==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
int main()
{
   int iValue=0;
   BOOL bRet= FALSE;
    
    printf("Enter number  :");
    scanf("%d",&iValue);

    bRet=ChkEvent(iValue);

    if(bRet==TRUE)
    {
        printf("Given number is even number");
    }
    else
    {
       printf("Given number is odd number");
    }
    return 0;
}
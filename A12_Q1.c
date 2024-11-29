/*#######################################################################
  A program which accept number from user and count Even digit 

Input:Enter number  :234567
Output:3

Input:Enter number   :22222
Output:5

Input:Enter number  :-987654
Output:3

Input:Enter number  :11111
Output:0

#######################################################################*/


#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit =0;
    int iCount=0;

    if (iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit%2==0)
        {
          iCount++;
        }
        iNo=iNo/10;
    
    }
 return iCount;
}

int main()
{
    int iValue=0;
    int iRet =0;

    printf("Enter number  :");
    scanf("%d",&iValue);

    iRet= CountEven(iValue);

    printf("%d",iRet);

    return 0;
}
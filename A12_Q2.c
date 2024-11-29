/*#######################################################################
  A program which accept number from user and count Odd digit 

Input:Enter number  :345678
Output:3

Input:Enter number   :-1267853
Output:4

Input:Enter number  :97531
Output:0

Input:Enter number  :64288
Output:0

#######################################################################*/


#include<stdio.h>

int CountOdd(int iNo)
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
        if(iDigit%2!=0)
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

    iRet= CountOdd(iValue);

    printf("%d",iRet);

    return 0;
}
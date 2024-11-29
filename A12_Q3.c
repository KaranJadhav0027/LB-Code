/*#######################################################################
  A program which accept number from user and count digit in between 3 to 7. 

Input:Enter number  :1298
Output:0

Input:Enter number   :4218875
Output:2

Input:Enter number  :2395
Output:1

Input:Enter number  :-98765431
Output:3

#######################################################################*/


#include<stdio.h>

int CountRange(int iNo)
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
        if(iDigit>3  && iDigit<7)
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

    iRet= CountRange(iValue);

    printf("%d",iRet);

    return 0;
}
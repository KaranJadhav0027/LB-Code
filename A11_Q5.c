/*#######################################################################
  A program which accept number from user and count frequency of
  such a digit which are less than 6.

Input:Enter number  :876543
Output:The Count of number less than 6 is  :3

Enter number   :-0971257
Output:The Count of number less than 6 is  :3

Enter number  :66666666
Output:The Count of number less than 6 is  :0

#######################################################################*/


#include<stdio.h>

int CountFour(int iNo)
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
        if(iDigit<6)
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

    iRet= CountFour(iValue);

    printf("The Count of number less than 6 is  :%d",iRet);

    return 0;
}
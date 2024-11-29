/*#######################################################################
  A program which accept number from user and count frequency of 2 in it

Input:Enter number  :3456
Output:The Count of 2 is :0

Enter number   :76528
Output:The Count of 2 is :1

Enter number  :-762422
Output:The Count of 2 is :3

#######################################################################*/


#include<stdio.h>

int CountTwo(int iNo)
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
        if(iDigit==2)
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

    iRet= CountTwo(iValue);

    printf("The Count of 2 is :%d",iRet);

    return 0;
}
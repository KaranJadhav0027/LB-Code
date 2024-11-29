/*#######################################################################
  A program which accept number from user and count frequency of 4 in it

Input:Enter number  :4326424
Output:The Count of Four is :3

Enter number   :-987653
Output:The Count of Four is :0

Enter number  :4444444
Output:The Count of Four is :7

#######################################################################*/


#include<stdio.h>

int Count(int iNo)
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
        if(iDigit==4)
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

    iRet= Count(iValue);

    printf("The Count of Four is :%d",iRet);

    return 0;
}
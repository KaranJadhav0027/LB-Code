/*#######################################################################
  A program which accept number from user and check whether it contain 0 or not;

Input:Enter number  :6543
Output:There is  no  Zero

Enter number   :87650
Output:It contain Zero


Enter number  :-2378
Output:There is  no  Zero

#######################################################################*/


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit =0;

    if (iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit ==0)
        {
          return TRUE;
        }
        else
        {
            return FALSE;
        } 
        iNo=iNo/10;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter number  :");
    scanf("%d",&iValue);
   
   bRet=ChkZero(iValue);

    if(bRet==TRUE)
    {
        printf("It contain Zero");
    }
    else
     {
        printf("There is  no  Zero");
    }
    return 0;

}
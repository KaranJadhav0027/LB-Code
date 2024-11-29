/*#######################################################################
  A program which accept number from user and Display its digit in reverse order

Input:Enter number  :5432
Output:2
       3
       4
       5

Enter number   :9000
Output:0
       0
       0
       9

Enter number  :-2378
Output:8
       7
       3
       2

#######################################################################*/


#include<stdio.h>

void CountTwo(int iNo)
{
    int iDigit =0;

    if (iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;
    
    }

}

int main()
{
    int iValue=0;

    printf("Enter number  :");
    scanf("%d",&iValue);

    CountTwo(iValue);

    return 0;
}
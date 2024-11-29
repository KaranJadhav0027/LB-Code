/*#######################################################################
   Accept N number from user and accept one another number as No,
  check whether No is present or not.
Input:
Enter number of element
6
Enter the  number
66
Enter 6 elemnts :
Enter 1 element  :85
Enter 2 element  :66
Enter 3 element  :3
Enter 4 element  :66
Enter 5 element  :93
Enter 6 element  :88

Output:
Number 12 is Present

Input:
Enter number of element
6
Enter the  number
12
Enter 6 elemnts :
Enter 1 element  :85
Enter 2 element  :11
Enter 3 element  :3
Enter 4 element  :15
Enter 5 element  :11
Enter 6 element  :111

Output:
Number 12 is Absent
#######################################################################*/

#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool Check(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;
    bool bValue=FALSE;
    
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]%iNo==0)
        {
           // bValue=TRUE;
            break;
        }
    }
    if(iCnt==iLength)
    {
        bValue=FALSE;
    }
    else
    {
        bValue=TRUE;
    }

    return bValue ;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue=0;
    int *p = NULL;
    bool bRet=FALSE;

    printf("Enter number of element \n");
    scanf("%d", &iSize);

    printf("Enter the  number \n");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elemnts :\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element  :", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    bRet = Check(p, iSize,iValue);
    
    if(bRet==TRUE)
    {
        printf("Number %d is Present",iValue);
    }
    else
    { 
        printf("Number %d is Absent",iValue);

    }
   

    free(p);

    return 0;
}

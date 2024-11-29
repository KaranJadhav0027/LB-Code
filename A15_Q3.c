/*#######################################################################
  Accept N number from user and accept one another number as No,
  return index of first occurrence of that No.

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
There is no such number  -1

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
First Occurrence of number is 3


#######################################################################*/

#include <stdio.h>
#include <stdlib.h>

int LastOcc(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;
    int iFrequency=-1;
    
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
           
            iFrequency=iCnt;
            
        }

    }

    return iFrequency;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0,iValue=0;
    int *p = NULL;

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

    
    iRet = LastOcc(p, iSize,iValue);

    if(iRet==-1)
    {
        printf("There is no such number  %d",iRet);
    }
    else
    {
        printf("Last Occurrence of number is %d",iRet);

    }

    free(p);

    return 0;
}

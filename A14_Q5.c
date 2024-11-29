/*#######################################################################
  Accept N number from user and accept one another number as No,return frequency of No from it.

Input:
Enter number of element
6
Enter the  number
66
Enter 6 elemnts :
Enter 1 element  :85
Enter 2 element  :11
Enter 3 element  :3
Enter 4 element  :66
Enter 5 element  :93
Enter 6 element  :88

Output:
Frequency of 66 numbers are :0

Input:
Enter number of element
6
Enter the  number
85
Enter 6 elemnts :
Enter 1 element  :85
Enter 2 element  :11
Enter 3 element  :3
Enter 4 element  :15
Enter 5 element  :11
Enter 6 element  :111

Output:
Frequency of 85 numbers are :1


#######################################################################*/

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;
    int iFrequency=0;
    
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFrequency++;
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

    
    iRet = Frequency(p, iSize,iValue);

    printf("Frequency of %d numbers are :%d\n",iValue, iRet);

    free(p);

    return 0;
}

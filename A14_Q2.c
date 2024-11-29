/*#######################################################################
  Accept N number from user and return Difference between Frequency of Even number and Odd number.


Input:
Enter number of element
7
Enter 7 elemnts :
Enter 1 element  :85
Enter 2 element  :66
Enter 3 element  :3
Enter 4 element  :80
Enter 5 element  :93
Enter 6 element  :88
Enter 7 element  :90

Output:
Difference between Frequency of Even & Odd numbers :
1

#######################################################################*/

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenFrequency=0,iOddFrequency=0;
    
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEvenFrequency++;
        }
        else
        {
          iOddFrequency++;
        }
    }

    return iEvenFrequency-iOddFrequency;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of element \n");
    scanf("%d", &iSize);

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
    iRet = Frequency(p, iSize);

    printf("Difference between Frequency of Even & Odd numbers :%d\n", iRet);

    free(p);

    return 0;
}

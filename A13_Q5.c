/*#######################################################################
  Accept N number from user and Display all such elemnents which are multiple of 11.

Input:
Enter number of element
6
Enter 6 elemnts :
Enter 1 element  :85
Enter 2 element  :66
Enter 3 element  :3
Enter 4 element  :55
Enter 5 element  :93
Enter 6 element  :88

Output:
Elements which are Multiple of 11 :
66  55  88
#######################################################################*/

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0, iEvenSum = 0, iOddSum = 0;
    int iDSum = 0;
    
    printf("Elements which are Multiple of 11 :\n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 11 == 0 )
        {
            printf("%d  ",Arr[iCnt]);
        }
        
    }
   
}
int main()
{
    int iSize = 0,  iCnt = 0;
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
    Display(p, iSize);

    free(p);

    return 0;
}

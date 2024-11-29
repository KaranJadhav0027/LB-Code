/*#######################################################################
  Accept N number from user and Display all such elemnents which are Even and divisible by 5.

Input:
Enter number of element
5
Enter 5 elemnts :
Enter 1 element  :85
Enter 2 element  :66
Enter 3 element  :3
Enter 4 element  :80
Enter 5 element  :93

Output:
Elements which are Even and divisible by 5 is :
80

#######################################################################*/

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0, iEvenSum = 0, iOddSum = 0;
    int iDSum = 0;
    
    printf("Elements which are Even and divisible by 5 is :\n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 5 == 0 && Arr[iCnt]%2==0)
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

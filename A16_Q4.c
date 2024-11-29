/*#######################################################################
  Accept N number from user and display all such number which contain 3 digits in it.

Input:
Enter number of element
6
Enter 6 elemnts :
Enter 1 element  :8225
Enter 2 element  :665
Enter 3 element  :3
Enter 4 element  :76
Enter 5 element  :953
Enter 6 element  :858

Output:
665 953 858


#######################################################################*/

#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
     
      for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]>99 && Arr[iCnt]<=999)
        {
          printf("%d ",Arr[iCnt]);
        }
    }

       
    return 0;
}
int main()
{
    int iSize = 0, iCnt = 0;
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

    
   Digits(p, iSize);

   

    free(p);

    return 0;
}

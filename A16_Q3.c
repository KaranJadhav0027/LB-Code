/*#######################################################################
  Accept N number from user and return the difference between largest ans Smallest number.

Input:
Enter number of element
6
Enter 6 elemnts :
Enter 1 element  :85
Enter 2 element  :66
Enter 3 element  :3
Enter 4 element  :66
Enter 5 element  :93
Enter 6 element  :88

Output:
Difference is  :90


#######################################################################*/

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0,iMin=0,iMax=0;
     iMin=Arr[0];
     iMax=Arr[0];
     int iDiff=0;
   
      for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
          iMax=Arr[iCnt];
        }

         if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }

    }
    iDiff=iMax-iMin;

    return iDiff;
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

    
    iRet = Difference(p, iSize);

   printf("Difference is  :%d",iRet);

    free(p);

    return 0;
}

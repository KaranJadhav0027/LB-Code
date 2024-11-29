/*#######################################################################
  Accept N number from user and Display summation of digits of each number.

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
17 17 3 13 17 21


#######################################################################*/

#include <stdio.h>
#include <stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCnt=0;
    int iDigit=0,iSum=0;
    
      for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum=0;
         while(Arr[iCnt] >0)
      {
        
        iDigit=Arr[iCnt]%10;
        iSum=iSum+iDigit;
        Arr[iCnt]=Arr[iCnt]/10;
      } 
      printf("%d ",iSum);     
    }
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

    
   DigitsSum(p, iSize);

   

    free(p);

    return 0;
}

/*#######################################################################
  Accept N number from user and accept Range,Dispaly all elements from that range


Input:
Enter number of element
6
Enter the  Starting point
60
Enter the  Ending point
90
Enter 6 elemnts :
Enter 1 element  :85
Enter 2 element  :66
Enter 3 element  :3
Enter 4 element  :76
Enter 5 element  :93
Enter 6 element  :88

Output:
Elements from 60 to 90 are :
85  66  76  88

Input:
Enter number of element
6
Enter the  Starting point
30
Enter the  Ending point
50
Enter 6 elemnts :
Enter 1 element  :85
Enter 2 element  :66
Enter 3 element  :3
Enter 4 element  :76
Enter 5 element  :93
Enter 6 element  :88

Output:
Elements from 30  to 50 are :


#######################################################################*/

#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[], int iLength,int iStart,int iEnd)
{
    int iCnt = 0;
    int iFrequency=-1;

    printf("Elements from %d  to %d are :",iStart,iEnd);
    
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]>iStart && Arr[iCnt]<iEnd)
        {
           
         printf("%d  ",Arr[iCnt]);
            
        }

    }


}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0,iValue1=0,iValue2;
    int *p = NULL;

    printf("Enter number of element \n");
    scanf("%d", &iSize);

     printf("Enter the  Starting point \n");
     scanf("%d", &iValue1);

     printf("Enter the  Ending point \n");
     scanf("%d", &iValue2);


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

    
   Range(p, iSize,iValue1,iValue2);

   
    free(p);

    return 0;
}

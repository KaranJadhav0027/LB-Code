/*#######################################################################
  Accept N number from user and return product of all Odd elements.

Input:
Enter number of element
6
Enter 6 elemnts :
Enter 1 element  :15
Enter 2 element  :66
Enter 3 element  :3
Enter 4 element  :70
Enter 5 element  :10
Enter 6 element  :88

Output:
Product is :45

Input:
Enter number of element
6
Enter 6 elemnts :
Enter 1 element  :44
Enter 2 element  :22
Enter 3 element  :66
Enter 4 element  :88
Enter 5 element  :24
Enter 6 element  :64

Output:
Product is :0


#######################################################################*/

#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iProduct=1;
    
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]%2==1)
        {
           iProduct=iProduct*Arr[iCnt]; 
        }
        else
        {
            iProduct=0;
        }

    }

    return iProduct;
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

    
    iRet = Product(p, iSize);

   printf("Product is :%d",iRet);

    free(p);

    return 0;
}

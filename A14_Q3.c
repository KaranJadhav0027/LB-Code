/*#######################################################################
  Accept N number from user check whether that number contain 11 in it or not.


Input:
Enter number of element
6
Enter 6 elemnts :
Enter 1 element  :85
Enter 2 element  :66
Enter 3 element  :11
Enter 4 element  :80
Enter 5 element  :93
Enter 6 element  :88

Output:
11 is Present

Input:
Enter number of element
4
Enter 4 elemnts :
Enter 1 element  :1
Enter 2 element  :2
Enter 3 element  :3
Enter 4 element  :4

Output:
11 is Absent
#######################################################################*/

#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;
    bool bValue=FALSE;
    
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]%11==0)
        {
           // bValue=TRUE;
            break;
        }
    }
    if(iCnt==iLength)
    {
        bValue=FALSE;
    }
    else
    {
        bValue=TRUE;
    }

    return bValue ;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    bool bRet=FALSE;

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
    bRet = Check(p, iSize);
    
    if(bRet==TRUE)
    {
        printf("11 is Present");
    }
    else
    { 
        printf("11 is Absent");

    }
   

    free(p);

    return 0;
}

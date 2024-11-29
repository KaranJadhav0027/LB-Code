/*#######################################################################
   Accept number from user and Display below pattern

Input:
    Enter the number of elements: 5
Output:
1   #   2   #   3   #   4   #   5   #

        

Input:
  Enter the number of elements: -3
Output:
      1   #   2   #   3   #
#######################################################################*/


#include <stdio.h>

void Pattern(int iNo)
 {
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for (iCnt =1; iCnt<=iNo; iCnt++) 
    {
        printf("%d   #\t", iCnt);
    }
    
}

int main() {
    int iValue = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}

/*#######################################################################
   Accept number from user and Display below pattern

Input:
    Enter the number of elements: 5

Output:
       A B C D E   

Input:
  Enter the number of elements: -6
Output:
       A B C D E F
#######################################################################*/


#include <stdio.h>

void Pattern(int iNo)
 {
    char cCnt=0.0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

   // ASCII values 'A'=65
    for (cCnt = 'A'; cCnt < 'A' + iNo; cCnt++) 
    {
        printf("%c ", cCnt);
    }
    
}

int main() {
    int iValue = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}

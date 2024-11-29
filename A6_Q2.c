/*#######################################################################
 Accept the Single digit number from user and print it into word 

Input:Enter number  : 4
Output:Four

Input:Enter number  :9
Output: Nine

Input:Enter number  : -3
Output:Three

Input:Enter number  : 34
Output:Invalid Number

#######################################################################*/


#include<stdio.h>

void Factorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

  switch (iNo)
  {
  case 1:
         printf("one");
          break;

  case 2:
          printf("Two");
          break;

  case 3:
          printf("Three");
          break;

  case 4: 
          printf("Four");
          break;
        
  case 5:
          printf("Five");
          break;
    
  case 6: 
          printf("Six");
          break;

  case 7:  
          printf("Seven");
          break;

  case 8: 
          printf("Eight");
          break;
        
  case 9: 
         printf("Nine");
         break;
  
  default: 
         printf("Invalid Number");
        
    break;
  }
}
int main()
{
  int iValue =0;

  printf("Enter number  :");
  scanf("%d",&iValue);

  Factorial(iValue);

    return 0;
}
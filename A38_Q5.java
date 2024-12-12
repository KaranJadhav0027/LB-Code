/*#######################################################################
   Accept N number from user and return difference summation os even digit 
   and summation of Odd digits

Input:
Enter the number
2395
Output:
Difference is  :-15

Input:
Enter the number
1018
Output:
multiplication is  :6
#######################################################################*/


import java.util.*;

class Digit
{
  public int iValue=0;

    public Digit(int iNo)
    {
        if(iNo<0)
        {
            iNo=-iNo;
        }
        iValue=iNo;
    }
    public int CountDiff()
    {
        int iEven=0,iOdd=0;
        int itemp=0;

        
        while(iValue!=0)
        {
            itemp=iValue%10;
           if(itemp%2==0)
           {
            iEven=iEven+itemp;
           }
           else
           {
            iOdd=iOdd+itemp;
           }
            iValue=iValue/10;
        }

        return iEven-iOdd;
    }
   
}

class A38_Q5

{
    public static void main(String Args[])
    {
        int iNo=0;
        int iRet=0;

       Scanner sobj = new Scanner(System.in);
  
      System.out.println("Enter the number");
      iNo=sobj.nextInt();

      Digit dobj=new Digit(iNo);
      iRet =dobj.CountDiff();
  
       System.out.println("Difference is  :"+iRet);
    
    }
}
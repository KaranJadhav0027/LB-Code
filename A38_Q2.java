/*#######################################################################
   Accept N number from user and return the Count of Odd digits.

Input:
Enter the number
2395
Output:
Count of Odd digit :3

Input:
Enter the number
-1018
Output:
Count of Odd digit :2
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
    public int CountOdd()
    {
        int iCount=0;

        while(iValue!=0)
        {
          if((iValue%10)%2!=0)
            {
                iCount++;
            }
            iValue=iValue/10;
        }
        return iCount;
    }
   
}

class A38_Q2
{
    public static void main(String Args[])
    {
        int iNo=0;
        int iRet=0;

       Scanner sobj = new Scanner(System.in);
  
      System.out.println("Enter the number");
      iNo=sobj.nextInt();

      Digit dobj=new Digit(iNo);
      iRet =dobj.CountOdd();
  
       System.out.println("Count of Odd digit :"+iRet);
    
    }
}
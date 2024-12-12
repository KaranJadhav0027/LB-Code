/*#######################################################################
   Accept N number from user and return the Count of Odd digits.

Input:
Enter the number
2395
Output:
Count of between 3 to 7  :2

Input:
Enter the number
9922
Output:
Count of between 3 to 7  :0
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
    public int CountRange()
    {
        int iCount=0;

        while(iValue!=0)
        {
          if((iValue%10)>=3 && (iValue%10)<=7)
            {
                iCount++;
            }
            iValue=iValue/10;
        }
        return iCount;
    }
   
}

class A38_Q3

{
    public static void main(String Args[])
    {
        int iNo=0;
        int iRet=0;

       Scanner sobj = new Scanner(System.in);
  
      System.out.println("Enter the number");
      iNo=sobj.nextInt();

      Digit dobj=new Digit(iNo);
      iRet =dobj.CountRange();
  
       System.out.println("Count of between 3 to 7  :"+iRet);
    
    }
}
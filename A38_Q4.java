/*#######################################################################
   Accept N number from user and return the Count of Odd digits.

Input:
Enter the number
2395
Output:
multiplication is  :270

Input:
Enter the number
922432
Output:
multiplication is  :864
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
    public int Multiply()
    {
        int iMulti=1;

        while(iValue!=0)
        {
           iMulti=iMulti*(iValue%10);
            iValue=iValue/10;
        }
        return iMulti;
    }
   
}

class A38_Q4

{
    public static void main(String Args[])
    {
        int iNo=0;
        int iRet=0;

       Scanner sobj = new Scanner(System.in);
  
      System.out.println("Enter the number");
      iNo=sobj.nextInt();

      Digit dobj=new Digit(iNo);
      iRet =dobj.Multiply();
  
       System.out.println("multiplication is  :"+iRet);
    
    }
}
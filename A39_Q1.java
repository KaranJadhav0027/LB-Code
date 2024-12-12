/*#######################################################################
   Accept N number from user and  Accept one another number as NO,check 
   whether No is present or not

Input:
Enter the number
6
check Number :
66
Enter the elements :
85
66
3
66
93
88
Output:
Number is present

Input:
Enter the number
5
check Number :
33
Enter the elements :
11
22
44
55
66

Output:
Number is Not present


#######################################################################*/


import java.util.*;


class Number
{
  public  int Arr[];
  public int iCheck=0;
    public Number(int iNo,int iValue)
    {
        Arr=new int [iNo];
        iCheck=iValue;
    }
    public void Accept()
    {
        int iCnt=0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements :");
        for (iCnt = 0; iCnt <Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }
    
    public boolean Check()
    {
        boolean bFlage=false;
        int iCnt=0;
        for (iCnt = 0; iCnt < Arr.length; iCnt++) 
        {
            if(iCheck==Arr[iCnt])
            {
                bFlage=true;
            }
        }

       
      return bFlage;
    }
}
class A39_Q1

{
    public static void main(String Args[])
    {
        int iNo=0,iValue=0;
        boolean bRet=false;

       Scanner sobj = new Scanner(System.in);
  
      System.out.println("Enter the number");
      iNo=sobj.nextInt();

      System.out.println("check Number :");
      iValue=sobj.nextInt();

      Number nobj=new Number(iNo,iValue);
      nobj.Accept();
      
      bRet =nobj.Check();

      if(bRet==true)
      {
       System.out.println("Number is present");
      }
      else
      {
        System.out.println("Number is Not present");
      }
    
    }
}
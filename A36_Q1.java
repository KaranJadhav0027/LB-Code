/*#######################################################################
   Accept String from user and Count Number of Capital Character.

Input:
Enter the string
Marvellous Multi OS

OutPut:
Count of Capital letter is :4
#######################################################################*/


import java.util.*;

class StringDemo
{
    
    public int CountCapital(String str)
    {
        int iCnt=0,iCount=0;

        for(iCnt=0;iCnt<str.length();iCnt++)
        {
           if(str.charAt(iCnt)>='A' && str.charAt(iCnt)<='Z')
           {
            iCount++;
           }

        }
       return iCount;
    }
}

class A36_Q1
{
    public static void main(String Args[])
    {
        int iRet=0;
        String sName;

       Scanner sobj = new Scanner(System.in);
  
      System.out.println("Enter the string");
      sName=sobj.nextLine();

      StringDemo obj=new StringDemo();
      iRet =  obj.CountCapital(sName);

      System.out.println("Count of Capital letter is :"+iRet);
    }
}
/*#######################################################################
   Accept String from user and Count Number of Small Character.

Input:
Enter the string
Marvellous

OutPut:
Count of Small letter is :9
#######################################################################*/


import java.util.*;

class StringDemo
{
    
    public int CountSmall(String str)
    {
        int iCnt=0,iCount=0;

        for(iCnt=0;iCnt<str.length();iCnt++)
        {
           if(str.charAt(iCnt)>='a' && str.charAt(iCnt)<='z')
           {
            iCount++;
           }

        }
       return iCount;
    }
}

class A36_Q2
{
    public static void main(String Args[])
    {
        int iRet=0;
        String sName;

       Scanner sobj = new Scanner(System.in);
  
      System.out.println("Enter the string");
      sName=sobj.nextLine();

      StringDemo obj=new StringDemo();
      iRet =  obj.CountSmall(sName);

      System.out.println("Count of Small letter is :"+iRet);
    }
}
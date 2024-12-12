/*#######################################################################
   Accept String from user and return difference between frequency of small 
   character and frequency of capital characters

Input:
Enter the string
MarvellouS

OutPut:
Count of Difference is :-6
#######################################################################*/


import java.util.*;

class StringDemo
{
    
    public int CountDiff(String str)
    {
        int iCnt=0,iCountCapital=0,iCountSmall=0;

        for(iCnt=0;iCnt<str.length();iCnt++)
        {
           if(str.charAt(iCnt)>='A' && str.charAt(iCnt)<='Z')
           {
            iCountCapital++;
           }

           if(str.charAt(iCnt)>='a' && str.charAt(iCnt)<='z')
           {
            iCountSmall++;
           }

        }
       return iCountCapital-iCountSmall;
    }
}

class A36_Q3
{
    public static void main(String Args[])
    {
        int iRet=0;
        String sName;

       Scanner sobj = new Scanner(System.in);
  
      System.out.println("Enter the string");
      sName=sobj.nextLine();

      StringDemo obj=new StringDemo();
      iRet =  obj.CountDiff(sName);

      System.out.println("Count of Difference is :"+iRet);
    }
}
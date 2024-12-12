/*#######################################################################
   Accept String from user and return difference between frequency of small 
   character and frequency of capital characters

Input:
Enter the string
MarvellouS

OutPut:
Contain Vowel

Input:
Enter the string
xyz

OutPut:
Not Contain Vowel
#######################################################################*/


import java.util.*;

class StringDemo
{
    
    public boolean CountDiff(String str)
    {
        int iCnt=0;
       boolean bFlag=false;

        for(iCnt=0;iCnt<str.length();iCnt++)
        {
           if(str.charAt(iCnt)=='A' || str.charAt(iCnt)=='E'||str.charAt(iCnt)=='I' || str.charAt(iCnt)=='O'||str.charAt(iCnt)=='U' || str.charAt(iCnt)=='a'||str.charAt(iCnt)=='e' || str.charAt(iCnt)=='i'||str.charAt(iCnt)=='o' || str.charAt(iCnt)=='u')
           {
            bFlag= true;
           }
        }
      return bFlag;
    }
}

class A36_Q4
{
    public static void main(String Args[])
    {
        boolean iRet=false;
        String sName;

       Scanner sobj = new Scanner(System.in);
  
      System.out.println("Enter the string");
      sName=sobj.nextLine();

      StringDemo obj=new StringDemo();
      iRet =  obj.CountDiff(sName);

      if(iRet==true)
      {
        System.out.println("Contain Vowel");
      }
      else
      {
        System.out.println("Not Contain Vowel");
      }
    }
}
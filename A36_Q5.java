/*#######################################################################
   Accept String from user and display it in reverse order

Input:
Enter the string
MarvellouS

OutPut:
Reversed string is: SuollevraM

#######################################################################*/


import java.util.*;

class StringDemo
{
    
    public void Reversed(String str)
    {
        char cArr[]=str.toCharArray();
        int iStart= 0;
        int iEnd=str.length()-1;
        char temp;

        while (iStart < iEnd) 
        {
            
             temp = cArr[iStart];
            cArr[iStart] = cArr[iEnd];
            cArr[iEnd] = temp;

            
            iStart++;
            iEnd--;
        }
        System.out.println("Reversed string is: "+new String(cArr) );
      
        
       
    }
}

class A36_Q5
{
    public static void main(String Args[])
    {
        
        String sName;

       Scanner sobj = new Scanner(System.in);
  
      System.out.println("Enter the string");
      sName=sobj.nextLine();

      StringDemo obj=new StringDemo();
      obj.Reversed(sName);

      
    }
}
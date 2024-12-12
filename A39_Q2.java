/*#######################################################################
Accept N number from user and  Accept one another number as NO,return index of first
Occurrence of that NO.

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
Number is position is :1

Input:
Enter the number
6
check Number :
12
Enter the elements :
85
11
3
15
1
111
Output:
Number is position is :-1

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
 
 public int FirstOcc()
 {
     
     int iCnt=0;
     for (iCnt = 0; iCnt < Arr.length; iCnt++) 
     {
         if(iCheck==Arr[iCnt])
         {
            return iCnt;
         }
     }
   return -1;
 }
}
class A39_Q2

{
 public static void main(String Args[])
 {
     int iNo=0,iValue=0;
     int  iRet=0;

    Scanner sobj = new Scanner(System.in);

   System.out.println("Enter the number");
   iNo=sobj.nextInt();

   System.out.println("check Number :");
   iValue=sobj.nextInt();

   Number nobj=new Number(iNo,iValue);
   nobj.Accept();
   
   iRet =nobj.FirstOcc();

    System.out.println("Number is position is :"+iRet);
   
  
 
 }
} 
    


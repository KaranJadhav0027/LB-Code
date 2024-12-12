/*#######################################################################
Accept N number from user and  Accept one another number as NO,return index of first
Occurrence of that NO.

Input:
Enter the number
6
check Number :
85
Enter the elements :
85
66
3
85
93
88
Output:
Number is position is :3

Input:
Enter the number
5
check Number :
4
Enter the elements :
88
33
55
22
11
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
 
 public int LastOcc()
 {
     int iCnt=0,iCount=-1;
     for (iCnt = 0; iCnt < Arr.length; iCnt++) 
     {
         if(iCheck==Arr[iCnt])
         {
            iCount=iCnt;
         }
     }

   return iCount;
 }
}
class A39_Q3

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
   
   iRet =nobj.LastOcc();

    System.out.println("Number is position is :"+iRet);
   
  
 
 }
} 
    


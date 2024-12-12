/*#######################################################################
Accept N number from user and Accept Range ,Display All elements from that range

Input:
Enter the number
6
 Enter Starting number  :
60
Enter Ending number  :
90
Enter the elements :
85
66
3
76
93
88
Output:
Elements between 60 & 90 Are
85
66
76
88

#######################################################################*/

import java.util.*;


class Number
{
public  int Arr[];
public int iStart=0;
public int iEnd=0;
 public Number(int iNo,int iFirst,int ilast)
 {
     Arr=new int [iNo];
     iStart=iFirst;
     iEnd =ilast;
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
 
 public void Display()
 {
     int iCnt=0;
     System.out.println("Elements between" +iStart +" & " +iEnd +" Are " );
     for (iCnt = 0; iCnt < Arr.length; iCnt++) 
     {
         if(Arr[iCnt]>=iStart && Arr[iCnt]<=iEnd)
         {
            System.out.println( Arr[iCnt]);
         }
     }
 }
}
class A39_Q4


{
 public static void main(String Args[])
 {
     int iNo=0,iValue1=0,iValue2;

    Scanner sobj = new Scanner(System.in);

   System.out.println("Enter the number");
   iNo=sobj.nextInt();

   System.out.println(" Enter Starting number  :");
   iValue1=sobj.nextInt();

   System.out.println("Enter Ending number  :");
   iValue2=sobj.nextInt();

   Number nobj=new Number(iNo,iValue1,iValue2);
   nobj.Accept();
   
   nobj.Display();

    
 }
} 
    


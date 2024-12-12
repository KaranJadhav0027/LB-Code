/*#######################################################################
Accept N number from user and return product of all Odd elements

Input:
Enter the number
6
Enter the elements :
15
66
3
70
10
88

Output:
Product of Odd elements are45

#######################################################################*/

import java.util.*;


class Number
{
public  int Arr[];

 public Number(int iNo)
 {
     Arr=new int [iNo];
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
 
 public int Product()
 {
     int iCnt=0;
     int iProduct=1;

     for (iCnt = 0; iCnt < Arr.length; iCnt++) 
     {
         if(Arr[iCnt]%2!=0)
         {
            iProduct=iProduct*Arr[iCnt];
         }
     }
     return iProduct;
 }
}
class A39_Q5


{
 public static void main(String Args[])
 {
     int iNo=0;
     int iRet=0;

    Scanner sobj = new Scanner(System.in);

   System.out.println("Enter the number");
   iNo=sobj.nextInt();

   Number nobj=new Number(iNo);
   nobj.Accept();
   
   iRet=nobj.Product();
 
    System.out.println("Product of Odd elements are  :" +iRet);
    
 }
} 
    


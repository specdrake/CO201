import java.io.*;
import java.util.*;
import java.math.*;
 
public class Main {
    
    public static Scanner scn = new Scanner(System.in);
	public static void main (String[] args) {
	      String[] sarr={"Roll","DS","OOP","Analog","M&S","Discrete","Total"};
	      
	      int n=scn.nextInt();
	      int[][] arr=new int[n][6];
	      for(int i=0;i<n;i++){
	          arr[i][0]=i+1;
	          System.out.println("Enter marks in DS : ");
	          arr[i][1]=scn.nextInt();
	          System.out.println("Enter marks in OOP : ");
	          arr[i][2]=scn.nextInt();
	          System.out.println("Enter marks in Analog : ");
	          arr[i][3]=scn.nextInt();
	          System.out.println("Enter marks in M&S : ");
	          arr[i][4]=scn.nextInt();
	          System.out.println("Enter marks in Discrete : ");
	          arr[i][5]=scn.nextInt();
	          
	      }
	      for(int i=0;i<7;i++){
	          System.out.print(sarr[i]+"   ");
	      }
	      System.out.println("");
	      for(int i=0;i<n;i++){
	          int total=0;
	          for(int j=0;j<6;j++){
	              System.out.print(arr[i][j]+" ");
	              for(int k=0;k<sarr[j].length();k++) System.out.print(" ");
	              if(j!=0)  total+=arr[i][j];
	          }
	          System.out.print(total);
	          System.out.println("");
	      }
	      double[] arr2=new double[5];
	      int ds=0,oop=0,analog=0,ms=0,discrete=0;
	      for(int i=0;i<n;i++){
	          ds+=arr[i][1];
	          oop+=arr[i][2];
	          analog+=arr[i][3];
	          ms+=arr[i][4];
	          discrete+=arr[i][5];
	      }
	      arr2[0]=((double)ds)/n;
	      arr2[1]=((double)oop)/n;
	      arr2[2]=((double)analog)/n;
	      arr2[3]=((double)ms)/n;
	      arr2[4]=((double)discrete)/n;
           
           for(int i=0;i<5;i++){
               System.out.println(sarr[i+1]+" : "+arr2[i]+" ");
                
               
           }
    }
   
	  
}

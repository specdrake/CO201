import java.io.*;
import java.util.*;
class pr1
{   public static void main()
    {   Scanner sc=new Scanner(System.in);
        System.out.println("Enter total number of students");
        int num=sc.nextInt();
        sc.nextLine();
        String arr[][]= new String[num+1][6];
        for(int i=1;i<num+1;i++)
        {   System.out.println("Enter roll no. of student");
            arr[i][0]=sc.nextLine();
        }
        for(int i=1;i<6;i++)
        {   System.out.println("Enter the 5 subjects");
            arr[0][i]=sc.nextLine();
        }
        for(int i=1;i<num+1;i++)
        {   System.out.println("Enter number of "+arr[i][0]+" student in:- ");
            for(int j=1;j<6;j++)
            {   System.out.println(arr[0][j]);
                arr[i][j]=sc.nextLine();
            }
        }
        int total;
        double avg_sub,total_sub;
        total=0;
        total_sub=0.0;
        for(int i=1;i<num+1;i++)
        {   System.out.println("Total marks of "+arr[i][0]+" student:- ");
            for(int j=1;j<6;j++)
            {   total=total+Integer.parseInt(arr[i][j]);
            }
            System.out.println(total);
            total=0;
        }
        for(int j=1;j<6;j++)
        {   System.out.println("Avg of "+arr[0][j]+" subject:- ");
            for(int i=1;i<num+1;i++)
            {   total_sub=total_sub+Integer.parseInt(arr[i][j]);
            }
            avg_sub=(total_sub/num);
            System.out.println(avg_sub);
            total_sub=0;
        }
    }
}

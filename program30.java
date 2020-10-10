import java.lang.*;
import java.util.*;
class Demo
{
   
    void Dislpay(int Row,int Col)
    {
       
        for(int i=1;i<=Row;i++)
        {
            for(int j=1;j<=Col;j++)
            {
              
              System.out.print(j+"\t"); 
               
            }
            
           
            System.out.print("\n");
        }
    }
}

class program30
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Demo dobj = new Demo();
        System.out.println("Entre the No of Row ");
        int Row = sobj.nextInt();
        System.out.println("Entre the No of Column");
        int Col = sobj.nextInt();
        dobj.Dislpay(Row,Col);
      
    }
}

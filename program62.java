import java.lang.*;
import java.util.*;
class Demo
{
   
  
    void Display(int row ,int col)
    {
      
        for(int i=row-1;i>=0;i--)
        {
            for(int j =0;j<col;j++)
            {
                if(i==j)
                {
                    System.out.print("#"+"\t");
                }
                else if(i>j)
                {
                    System.out.print("*"+"\t");
                }
                else
                {
                     System.out.print("@"+"\t");
                }

            }
            System.out.print("\n");
        }
    }   
    
}

class program62
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Demo dobj = new Demo();
     
        System.out.println("Entre the Row ");
        int row = sobj.nextInt();

        
        System.out.println("Entre the Collumn ");
        int col = sobj.nextInt();

       
    

      
          dobj.Display(row ,col);

       
        
    }
}

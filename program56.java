import java.lang.*;
import java.util.*;
class Demo
{
   
  
    void Display(String str)
    {
       char arr[] = str.toCharArray();
        int n = arr.length;

        for(int i=0;i<arr.length;i++)
        {
            for(int j = 0;j<arr.length;j++)
            {
                    if(j<=i)
                    {
                        System.out.print(arr[j]+"\t");
                    }
                    else
                    {
                        System.out.print("*"+"\t");
                    }
            }
            System.out.print("\n");
        }
        
    }
   
    
}

class program56
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Demo dobj = new Demo();
        System.out.println("ENtre the String");

        String str = sobj.nextLine();
       

       
    

      
          dobj.Display(str);

       
        
    }
}

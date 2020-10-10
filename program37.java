import java.lang.*;
import java.util.*;
class Demo
{
   
   boolean ret = false;
    boolean Dislpay(String str,String dest)
    {
       

       ret = str.equals(dest);
         return ret;
    }

    
}

class program37
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Demo dobj = new Demo();
        System.out.println("Entre the string  ");
        String str = sobj.nextLine();
        System.out.println("Entre Destination String");
        String dest = sobj.nextLine();
        boolean bret =false;
      
       bret  = dobj.Dislpay(str,dest);
        if(bret==true)
        {
            System.out.println("Strings are  equal");
        }
        else
        {
            System.out.println("Strings are Not equal");
        }
    }
}

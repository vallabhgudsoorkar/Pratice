import java.lang.*;
import java.util.*;
class Demo
{
   
   boolean ret = false;
    boolean Dislpay(String str,String dest,int icnt)
    {
       char arr[] = dest.toCharArray();
       char brr[] = new char [icnt];
       boolean ret = false;
       for(int i = 0;i<icnt;i++)
       {
           brr[i] = arr[i];
       }
        String dest1 = new String(brr);

        ret = str.equals(dest1);

         return ret;
    }

    
}

class program38
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

         System.out.println("Entre Number");
        int icnt  = sobj.nextInt();


       bret  = dobj.Dislpay(str,dest,icnt);
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

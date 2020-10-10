import java.lang.*;
import java.util.*;
class ArrayDemo
{
    public void Display(int arr[])
    {
        for(int i = 0; i<arr.length;i++)
        {
            if(arr[i]%5==0)
            {
                System.out.print(arr[i]+"\t");
            }
        }
    }
}

class program2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        ArrayDemo aobj = new ArrayDemo();

        System.out.println("Entre length of array ");

        int value = sobj.nextInt();

        int arr[] = new int [value];
       
        for(int i = 0; i<arr.length;i++)
        {
            arr[i] = sobj.nextInt();
        }

        aobj.Display(arr);





    }
}
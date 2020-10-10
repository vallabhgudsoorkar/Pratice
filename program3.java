import java.lang.*;
import java.util.*;
class Array
{
    public void Display(int arr[])
    {
        for(int i = 0; i<arr.length;i++)
        {
            if((arr[i]%2==0) && (arr[i]%5==0))
            {
                System.out.print(arr[i]+"\t");
            }
        }
    }
}
class program3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        Array aobj = new Array();

        System.out.println("Entre the lenth of array");

        int value = sobj.nextInt();

        int arr[] = new int [value];

        for(int i = 0; i<arr.length;i++)
        {
            arr[i] = sobj.nextInt();
        }

        aobj.Display(arr);
        
    }



}
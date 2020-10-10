import java.lang.*;
import java.util.*;
class Array
{
    public void Display(int arr[])
    {
        for(int i = 0; i<arr.length;i++)
        {
            if((arr[i]%3==0) && (arr[i]%5==0))
            {
                System.out.print(arr[i]+"\t");
            }
        }
    }
}

class program4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Array dobj = new  Array();

        System.out.println("Entre the lenghth of Array");
        int value = sobj.nextInt();

        int arr[] = new int [value];

        for(int i = 0;i<arr.length;i++)
        {
            arr[i] = sobj.nextInt();
        }

            dobj.Display(arr);

    }
}

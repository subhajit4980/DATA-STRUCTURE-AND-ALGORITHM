import java.util.*;
//import java.lang.*;
public class LargestNUmber {
    static int largest(ArrayList<Integer> arr)
    {
        int n=arr.size();
        int res=0;
        for(int i=0;i<n;i++)
        {
            if(arr.get(i)>arr.get(res))
            {
                res=i;
            }
        }
        return res;
    }
    public static void main(String[] args) {

        // new Scanner(System.in);
        ArrayList<Integer> arr=new ArrayList<Integer>();
        arr.add(10);
        arr.add(20);
        arr.add(30);
        arr.add(30);
        arr.add(40);
       // int arr[]={10,20,30,30,40};
int p=largest(arr);
        //System.out.println(arr[largest(arr)]);
        System.out.println(arr.get(p));
        //System.out.println("Maximum"+Collections.max(arr));
    }
    
}

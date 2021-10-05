import java.util.*;
public class deldublicatelement {  

    static int dupli(int arr[])
    {   int res=1;
        for (int i = 1; i < arr.length; i++) {
            if(arr[i]!=arr[res-1])
            {
                arr[res]=arr[i];
                res++;
            }
        }
        return res;

    }
    ////delete duplicate element in array time complexity=O(n), space complexity=O(1)
    public static void main(String[] args) {
        int arr[]={12,12,23,45,65,45,23};
        Arrays.sort(arr);
        int n=dupli(arr);
        for (int i = 0; i <n; i++) {
            System.out.println(arr[i]);
        }
    
        
    }
    
}

import java.util.HashSet;
import java.util.Set;

// import java.util.*;
public class Union_of_two_unsorted_arrays {
    public static void main(String[] args) {
        int arr1[]=new int[]{12,34,56,78,90,43,21};
        int arr2[]=new int[]{12,45,67,43,21,90,78};
        System.out.println(union(arr1, arr2));
    }
    static int union(int arr1[],int arr2[])
    {
        Set<Integer>ad=new HashSet<>();
        for(int a:arr1)
        {
            ad.add(a);
        }
        for(int b:arr2)
        {
            ad.add(b);
        }
        return ad.size();
    }
}

import java.util.*;
public class Count_Distinct_Elements {
    public static void main(String[] args) {
        int[] arr= new int[]{22,34,22,35,34,23,45,35};
        int n=arr.length;
        System.out.println(count(arr, n));
        Integer[] arr1= new Integer[]{22,34,22,35,34,23,45,35};
        System.out.println(c(arr1));
    }
    // ---------------------1st method------------------------
    static int count(int arr[], int n){
        Set<Integer> a=new HashSet<Integer>();
        for (int i = 0; i < arr.length; i++) {
            a.add(arr[i]);
        }
        return a.size();
    }
    // --------------------2nd method-----------------------
    static int c(Integer arr[])
    {
        HashSet<Integer> m=new HashSet<Integer>(Arrays.asList(arr));
        return m.size();
    }
}

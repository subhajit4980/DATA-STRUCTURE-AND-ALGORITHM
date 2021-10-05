import java.util.*;
public class Frequencies_of_array_elements {
    public static void main(String[] args) {
        int[]arr=new int[]{12,34,56,34,12,45,56,12,45,34};
        frequency(arr);
        
    }
    static void frequency(int arr[])
    {
        // int n=arr.length;
        Map <Integer,Integer> a=new HashMap<Integer,Integer>();
     /*   for(int i = 0; i < n; i++)
        {
            // int key = arr[i];
            if(a.containsKey(arr[i]) == true)
              a.put(arr[i], a.get(arr[i]) + 1);
            else
              a.put(arr[i], 1);    
        }*/
        for(int h: arr)
        {
            a.put(h,a.getOrDefault(h,0)+1);
        }
        for(Map.Entry<Integer,Integer>ita:a.entrySet())
        {
            System.out.println(ita.getKey()+" "+ita.getValue());
        }
    }
}

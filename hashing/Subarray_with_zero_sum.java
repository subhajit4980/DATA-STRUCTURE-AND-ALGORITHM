import java.util.*;
import java.lang.*;
import java.io.*;

class Subarray_with_zero_sum
{
    public static void main (String[] args) 
    {
        int arr[] = new int[]{5, 3, 9, -4, -6, 7, -1};
        int n = arr.length;
        
        System.out.println(ZeroSumSubarray(arr, n));
        
    }
    
    static boolean ZeroSumSubarray(int arr[], int n)
    {
        Set<Integer> us = new HashSet<Integer>();
        int prefix_sum = 0;
        // us.add(0);
        for(int i :arr)
        {
            prefix_sum += i;
            if(us.contains(prefix_sum))
              return true;
              
            us.add(prefix_sum);
        }
        
        return false;
    }
}

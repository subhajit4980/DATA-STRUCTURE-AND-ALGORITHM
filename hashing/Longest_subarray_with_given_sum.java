import java.util.HashMap;
import java.util.Map;

public class Longest_subarray_with_given_sum {
    public static void main(String[] args) {
        int arr[] = new int[]{8, 3, -7, -4, 1};
        // int n = arr.length;
        int sum = -8;
        System.out.println(maxlen(arr, sum));
    }
    static int maxlen(int arr[] , int sum)
    {
        Map <Integer,Integer> hm = new HashMap<>();
        int pre_sum=0,res=0;
        for (int i = 0; i < arr.length; i++) {
            pre_sum+=arr[i];
            if(pre_sum==sum)
            {
                res=i+1;
            }
            if(hm.containsKey(pre_sum)==false){
                hm.put(pre_sum, i);
            }
            if(hm.containsKey(pre_sum-sum)){
                res=Math.max(res, i-hm.get(pre_sum-sum));
            }
        }
        return res;
    }
}

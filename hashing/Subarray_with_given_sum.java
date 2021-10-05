import java.util.HashSet;
import java.util.Set;
// Time complexity  theta(n)
//aux space O(n)
public class Subarray_with_given_sum {
    public static void main(String[] args) {
        int[] arr=new int[]{5,8,6,13,3,-1};
        int sum=22;
        System.out.println(subarray_sum(arr, sum));
    }
    static boolean subarray_sum(int arr[],int sum)
    {
        Set<Integer>hs=new HashSet<>();
        int pre_sum=0;
        for(int x:arr)
        {
            pre_sum+=x;
            if(pre_sum==sum) return true;
            if(hs.contains(pre_sum-sum))
            {
                return true;
            }
            hs.add(pre_sum);
        }
        return false;
    }
}

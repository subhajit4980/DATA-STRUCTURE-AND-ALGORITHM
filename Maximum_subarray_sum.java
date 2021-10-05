public class Maximum_subarray_sum {
    static int maximum(int arr[])
    {
        int res=arr[0];
        int maxending=arr[0];
        for (int i = 1; i < arr.length; i++) {
            maxending=Math.max((arr[i]+maxending),arr[i]);
            res=Math.max(res,maxending);
        }
        return res;
    }
    public static void main(String[] args) {
        int arr[]={-3,8,-2,4,-5,6};
        System.out.println(maximum(arr));
    }
}

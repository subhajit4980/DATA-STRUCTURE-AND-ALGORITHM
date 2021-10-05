public class Equlibrium_point {
    static boolean prefix(int arr[] )
    {
        int sum=0;
        for (int i = 0; i < arr.length; i++) {
            sum+=arr[i];
        }
        int l_sum=0;
        for (int i = 0; i < arr.length; i++) {
            if(l_sum==sum-arr[i])
                return true;
            l_sum+=arr[i];
            sum-=arr[i];
        }
        return false;
    } 
    public static void main(String[] args) {
        int arr[]={3, 4, 8, -9, 20, 6};
        System.out.println(prefix(arr));
    }
}

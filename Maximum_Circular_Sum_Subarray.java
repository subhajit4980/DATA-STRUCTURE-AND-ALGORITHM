//import jdk.internal.doclets.formats.html.resources.standard;

public class Maximum_Circular_Sum_Subarray {
    static int normalmaxsum(int arr[])
    {
        int res=arr[0];
        int maxending=arr[0];
        for (int i = 1; i < arr.length; i++) {
            maxending=Math.max(arr[i],arr[i]+maxending);
            res=Math.max(res,maxending);
        }
        return res;
    }
    static int overallmaxsum(int arr[])
    {
        int max_normal_sum=normalmaxsum(arr);
        int arr_sum=0;
        for (int i = 0; i < arr.length; i++) {
            arr_sum+=arr[i];
            arr[i]=-arr[i];
        }
        int max_circular=arr_sum+normalmaxsum(arr);
        return(Math.max(max_normal_sum, max_circular));
    }
    public static void main(String[] args) {
        int arr[]={8,-4,3,-5,4};
        System.out.println(overallmaxsum(arr));
    }
}

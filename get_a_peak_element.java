public class get_a_peak_element {
    static int peak(int arr[])
    {
        int n=arr.length;
        int low=0,high=arr.length-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if((mid==0 || arr[mid-1]<=arr[mid])&&(mid==n-1 || arr[mid]>=arr[mid+1]))
            {
                return mid;
            }
            else if(mid>0 && arr[mid-1]>=arr[mid])
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        return 0;
    }
    public static void main(String[] args) {
        int arr[]={12,23,34,45,32,56};
        System.out.println(peak(arr));
    }
}

public class Allocate_Minimum_Pages {
    static int  minpage(int arr[],int n,int k)
    {
        int sum=0,max=0;
        for (int i = 0; i < arr.length; i++) {
            sum+=arr[i];
            max=Math.max(max, arr[i]);
        }
        int low=max,high=sum,res=0;
        while(low<=high)
        {
          int mid=(low+high)/2;
          if(ispossible(arr,n,k,mid))
          {
            res=mid;
            high=mid-1;
          }
          else
          {
              low=mid+1;
          }
        }
        return res;
    }
    static boolean ispossible(int arr[],int n,int k ,int ans)
    {
         int req=1,sum=0;
         for (int i = 0; i < arr.length; i++) {
             if(sum+arr[i]>ans)
             {
                 req++;
                 sum=arr[i];
             }
             else{
                 sum+=arr[i];
             }
         }
         return(req<=k);

    }
    public static void main(String[] args) {
        int arr[]={12,34,67,90};
        int n=arr.length;
        int k=2;
        System.out.println(minpage(arr, n, k));
    }
}

public class Longest_Even_Odd_Subarray {
    static int longest(int arr[])
    {
        int res=1;
        int curr=1;
        for (int i = 1; i < arr.length; i++) {
            //alternating those elements
            if((arr[i]%2==0 && arr[i-1]%2!=0)||(arr[i]%2!=0 && arr[i-1]%2==0))
            {
                curr++;
                //take maximum value between res and curr
                res=Math.max(res,curr);
            }
            else{
                //if numbers are not in even odd order
                curr=1;
            }
        }
        return res;
    }
    public static void main(String[] args) {
        int arr[]={5,10,20,6,3,8};
        System.out.println(longest(arr));
    }
}

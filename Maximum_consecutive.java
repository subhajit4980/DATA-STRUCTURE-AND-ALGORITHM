public class Maximum_consecutive {
    static int max_consecutive(int arr[])
    {
        int res=0,curr=0;
        // int n =arr.length;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i]==0) {
                curr=0;
            }
        
        else{
            curr++;
            res=Math.max(res,curr);
            }
        }
        return res;
    }
    public static void main(String[] args) {
        int arr[]={0,1,1,0,1,1,1};
        System.out.println(max_consecutive(arr));
    }
}
//TIME COMPLEXITY=O(n)
//aux space =O(1)
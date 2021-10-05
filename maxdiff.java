public class maxdiff {
    static int Maxdiff(int arr[]){
        int res=arr[1]-arr[0];
        for (int i = 0; i < arr.length; i++) {
            for (int j = i+1; j < arr.length; j++) {
                    res=Math.max(res,arr[j]-arr[i]);
            }
        }
        return res;
    }
    static int maxDiff(int arr[], int n)
    {
    	int res = arr[1] - arr[0], minVal = arr[0];

    	for(int i = 1; i < n; i++)
    	{
    		
    			res = Math.max(res, arr[i] - minVal);
    			
    			minVal = Math.min(minVal, arr[i]);
    	}

    	return res;
    }
    public static void main(String[] args) {
        int arr[]={1,2,3,12,23,43,5,2,21};
        int n=9;
        System.out.println(Maxdiff(arr));
        System.out.println(maxDiff(arr, n));
    }
}

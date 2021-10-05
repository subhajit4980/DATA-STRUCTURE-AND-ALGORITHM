public class stock_and_sell_part_one{
    static int stock(int arr[])
    {
        int max_profit=0;
        int minsofar=arr[0];
        for (int i = 0; i < arr.length; i++) {
            minsofar=Math.min(minsofar, arr[i]);
            int profit=arr[i]-minsofar;
            max_profit=Math.max(max_profit, profit);
        }
        return max_profit;
    }

    static int total_propfit(int arr[])
    {
        int profit=0;
        for (int i = 1; i < arr.length; i++) {
            if(arr[i]>arr[i-1])
            {
                profit+=arr[i]-arr[i-1];
            }
        }
        return profit;
    }
    public static void main(String[] args) {
        int arr[]={1, 5, 3, 8, 12};
        System.out.println(stock(arr));
        System.out.println(total_propfit(arr));
    }
}

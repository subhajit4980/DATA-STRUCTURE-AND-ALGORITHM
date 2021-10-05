public class frequencies_of_array {
    static void freq(int arr[])
    {
        int freqe=1;
        int i=1;
        int n=arr.length;
        while(i<arr.length)
        {
            while(i<n && (arr[i]==arr[i-1]))
            {
                freqe++;
                i++;
            }
            System.out.println(arr[i-1]+"="+freqe);
            i++;
            freqe=1;
        }
        if(n==1 ||(arr[n-1]!=arr[n-2]))
        {
            System.out.println(arr[n-1]+"="+1);
        }
    }
    public static void main(String[] args) {
        int arr[]={10,10,30,30,30,40,40};
         freq(arr);
    }
}

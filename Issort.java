public class Issort{
    static boolean isSorted(int arr[], int n)
{
	for(int i = 1; i < n; i++)
	{
	    if(arr[i] < arr[i - 1])
	        return false;
	}

	return true;
} 
 public static void main(String[] args) {
    

    
    int arr[]={1,2,35,6,7};
    System.out.println(isSorted(arr,5));
}
    
}

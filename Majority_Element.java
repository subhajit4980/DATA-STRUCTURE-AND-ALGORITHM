public class Majority_Element {
    
    static int findMajority(int arr[], int n)
    {
    	int res = 0, count = 1;
			// which element is major in the array
    	for(int i = 1; i < n; i++)
    	{
    		if(arr[res] == arr[i])
    			count++;
    		else 
    			count --;

    		if(count == 0)
    		{
    			res = i; count = 1;
    		}
    	}

    	count = 0;
		// find the index of the major element
    	for(int i = 0; i < n; i++)
    		if(arr[res] == arr[i])
    			count++;

    	if(count <= n /2)
    		return -1;

    	return arr[res]; 
    }


    public static void main(String args[]) 
    { 
       int arr[] = {1,13}, n = 2;

       System.out.println("the major element is "+findMajority(arr, n));

    } 
}

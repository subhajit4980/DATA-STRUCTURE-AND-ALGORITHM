class sum_of_subarray{ 
	/* Returns true if the there is a subarray of arr[] with sum equal to 
	'sum' otherwise returns false. Also, prints the result */
	static void subArraySum(int arr[], int n, int sum) 
	{ 
		int curr_sum = arr[0], start = 0, end; 

		// Pick a starting point 
		for (end = 1; end <= n; end++) 
		{ 
			// If curr_sum exceeds the sum, then remove the starting elements 
			while (curr_sum > sum && start < end-1) 
			{ 
				curr_sum = curr_sum - arr[start]; 
				start++; 
			} 
			
			// If curr_sum becomes equal to sum, then return true 
			if (curr_sum == sum) 
			{ 
				int p = end-1; 
				System.out.println("Sum found between indexes " + start 
						+ " and " + p); 
				// return 1; 
                return;
			} 
			
			// Add this element to curr_sum 
			if (end < n) 
			curr_sum = curr_sum + arr[end]; 
			
		} 

		System.out.println("No subarray found"); 
		// return 0; 
        return;
	} 

    public static void main(String[] args) {
    // SubarraySum arraysum = new SubarraySum(); 
    int arr[] = {15, 2, 4, 8, 9, 5, 10, 23}; 
    int n = arr.length; 
    int sum = 23; 
    subArraySum(arr, n, sum); 
    }
}
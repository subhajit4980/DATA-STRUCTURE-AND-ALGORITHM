package array;


public class Minimum_Consecutive_Flips {
    static void printgroups(int arr[])
    {
        for (int i = 1; i < arr.length; i++) {
// if cuurent element is different from previous element then the group for fliping started          
            if(arr[i] != arr[i-1])
            {
//if current element is different from the 1st element in the array then the fliping strat from this element                
                if(arr[i] != arr[0]) 
                System.out.println("from "+ i +" to");
//if the current element is same as the 1st element then the fliping end for the group 
                else{
                    System.out.println(i-1);
                }
            }
        }
        int n=arr.length;
//if there is no element to end the group
        if(arr[n-1] !=arr[0])  
        {
            System.out.println(n-1);
        }
    }
    public static void main(String[] args) {
        int arr[]={0,0,1,1,0,0,1,1,0,1};
        printgroups(arr);
    }
}

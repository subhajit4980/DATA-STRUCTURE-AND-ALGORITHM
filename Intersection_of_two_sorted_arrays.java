public class Intersection_of_two_sorted_arrays {
        static void intersection(int arr1[],int arr2[])
        {
            int n1=arr1.length;
            int n2=arr2.length;
            int i=0,j=0;
            while(i<n1 && j<n2)
            {
                if(i>0 && arr1[i]==arr1[i-1])
                {
                    continue;
                }
                if(arr1[i]<arr2[j])
                {
                    i++;
                }
                else if(arr1[i]>arr2[j])
                {
                    j++;
                }
                else{
                    System.out.println(arr1[i]+" ");
                    i++;
                    j++;                 
                }
            }
                                
        }    
        public static void main(String[] args) {
            int arr[]={12,16,24,38};
            int brr[]={13,16,38};
            intersection(arr, brr);
        }
}

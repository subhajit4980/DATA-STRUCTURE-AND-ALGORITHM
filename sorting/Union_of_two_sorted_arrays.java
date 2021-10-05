package sorting;
public class Union_of_two_sorted_arrays {
    static void union(int arr1[],int arr2[])
    { 
        int n1=arr1.length,n2=arr2.length;
        int i=0,j=0;
        while(i<n1 && j<n2)
        {
            if(i>0 && arr1[i]==arr1[i-1])
            {   i++;
                continue;
            }
            if(j>0 && arr2[j]==arr2[j-1])
            {   j++;
                continue;
            }
            if(arr1[i]<arr2[j])
            {
                System.out.print(arr1[i]+" ");
                i++;
            }
            else if(arr1[i]>arr2[j])
            {
                System.out.print(arr2[j]+" ");
                j++;
            }
            else{
                System.out.print(arr1[i]+" ");
                i++;j++;
            }

        }
        while(i<n1){if(i==0||arr1[i]!=arr1[i-1])System.out.print(arr1[i]+" ");i++;}
        while(j<n2){if(j==0||arr2[j]!=arr2[j-1])System.out.print(arr2[j]+" ");j++;}
    }
    public static void main(String[] args) {
        int arr1[]={3,8,8};
        int arr2[]={2,8,8,10,15};
        union(arr1, arr2);
    }
}

public class prefix_sum_array {
    static  int get_sum(int arr[],int l,int r)
    {
        if(l!=0)
        return arr[r]-arr[l-1];
        else
        return arr[r];
    }
public static void main(String[] args) {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int l=2,r=4;
    int prefix[]=new int[100];
    prefix[0]=arr[0];
    for (int i = 1; i < arr.length; i++) {
        prefix[i]+=prefix[i-1]+arr[i];
        
    }
    System.out.println(get_sum(prefix, l, r));
}
}

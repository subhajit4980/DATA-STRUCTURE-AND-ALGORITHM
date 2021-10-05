public class Count_inversions_in_Array {
    public static void main (String[] args) 
    {
        long arr[] = new long[]{2,4,1,3,5};
        
        long n = arr.length;
	    System.out.print(countInv(arr,0,n-1));
        
    }
    
    static long countInv(long arr[], long l, long r)
    {
        long res = 0;
        if (l<r) {
           
            long m = (r + l) / 2;
     
            res += countInv(arr, l, m);
            res += countInv(arr, m + 1, r);
            res += countAndMerge(arr, l, m , r);
        }
        return res;
    }
    
    static long countAndMerge(long arr[], long l, long m, long r)
    {
        long n1=m-l+1, n2=r-m;
        long[] left=new long[(int)n1];long[] right=new long[(int)n2];
        for(long i=0;i<n1;i++)
            left[(int)i]=arr[(int) ((int)i+l)];
        for(long j=0;j<n2;j++)
            right[(int)j]=arr[(int) ((int)m+1+j)];    
        long res=0,i=0,j=0,k=l;
        while(i<n1 && j<n2){
            if(left[(int)i]<=right[(int)j])
                {arr[(int)k++]=left[(int)i++];}
            else{
                arr[(int)k++]=right[(int)j++];
                res=res+(n1-i);
            }
        }
        while(i<n1)
            arr[(int)k++]=left[(int)i++];
        while(j<n2)
            arr[(int)k++]=right[(int)j++];
        return res;
    }
}

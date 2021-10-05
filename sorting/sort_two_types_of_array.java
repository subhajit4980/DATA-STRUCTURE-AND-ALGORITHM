// import java.util.*;
// import java.lang.*;
// import java.io.*;
package sorting;
public class sort_two_types_of_array {
    static void sort(int arr[],int n)
    {
        int i=-1,j=n;
        while(true){
            do{i++;}
            while(arr[i]<0);
            do{j--;}
            while(arr[j]>=0);
        
        if(i>=j)return ;
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;}
    }
    public static void main (String[] args) 
    {
        int arr[] = new int[]{13,-12,18,-10};
        
        int n = arr.length;
        
        sort(arr,n);
	
	    for(int x:arr)
            System.out.print(x+" ");
        
    }
    
}

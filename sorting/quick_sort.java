// import java.util.*;
package sorting;
public class quick_sort {

    static int partition(int arr[], int l, int h){
        int pivot=arr[l];
        int i=l;
        int j=h;
        int temp;
        while(i<j){
            while(arr[i]<=pivot &&i<h)
            i++;
            while(arr[j]>pivot && j>l)
            j--;
            if(i<j)
            {
            temp = arr[i]; 
            arr[i] = arr[j]; 
            arr[j] =temp;}
        }
        int ttemp = arr[j]; 
        arr[j] = arr[l]; 
        arr[l] = ttemp;

        return j;
    }
  static void quicksort(int arr[],int l,int h)
    {
    if(l<h) {
        int povit=partition(arr, l, h);
        quicksort(arr,l,povit-1);
        quicksort(arr, povit+1, h);
    }
    }
    public static void main(String[] args) 
  { 
    int arr[] = { 1, 4, 45, 6, 10, 8 };
        
        quicksort(arr, 0, 5);
        for(int j = 0; j < arr.length; j++) {
            System.out.println(arr[j]);
        }
        
    }
}
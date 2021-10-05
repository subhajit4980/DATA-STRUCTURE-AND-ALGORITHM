//                 import java.util.*;
//                 import java.io.*;
//                 import java.lang.*;
package sorting;
public class Heap_Sort 
{ 
	public void buildheap(int arr[],int n){
        for (int i = n / 2 - 1; i >= 0; i--) 
		    heapify(arr, n, i);
    }
	
	public void sort(int arr[]) 
	{ 
		int n = arr.length; 

		buildheap(arr,n); 
 
		for (int i=n-1; i>0; i--) 
		{ 
			 
			int temp = arr[0]; 
			arr[0] = arr[i]; 
			arr[i] = temp; 

			heapify(arr, i, 0); 
		} 
	} 

	void heapify(int arr[], int n, int i) 
	{ 
		int largest = i;  
		int l = 2*i + 1; 
		int r = 2*i + 2; 

		if (l < n && arr[l] > arr[largest]) 
			largest = l; 
 
		if (r < n && arr[r] > arr[largest]) 
			largest = r; 

		if (largest != i) 
		{ 
			int swap = arr[i]; 
			arr[i] = arr[largest]; 
			arr[largest] = swap; 

			heapify(arr, n, largest); 
		} 
	} 

	static void printArray(int arr[]) 
	{ 
		int n = arr.length; 
		for (int i=0; i<n; ++i) 
			System.out.print(arr[i]+" "); 
		System.out.println(); 
	} 
 
	public static void main(String args[]) 
	{ 
		int arr[] = {12, 11, 13, 5, 6, 7}; 
		//                 int n = arr.length; 

		Heap_Sort ob = new Heap_Sort(); 
		ob.sort(arr); 

		System.out.println("Sorted array is"); 
		printArray(arr); 
	} 
} 

// Heap Sort Algorithm for sorting an array in increasing order:-
// 
// 1>  Build a max heap from the input data.
// 2>  At this point, the largest item is stored at the root of the heap.
//     Replace it with the last item of the heap followed by reducing the size of heap by 1. 
//     Finally, heapify the root of tree.
// 3>  Repeat above steps while size of heap is greater than 1.


//                 Input data: [4, 10, 3, 5, 1]
//                          4(0)
//                         /   \
//                      10(1)   3(2)
//                     /   \
//                  5(3)    1(4)

//          The numbers in bracket represent the indices in the array 
//          representation of data.

//                 Applying heapify procedure to index 1:
//                          4(0)
//                         /   \
//                     10(1)    3(2)
//                     /   \
//                 5(3)    1(4)

//                 Applying heapify procedure to index 0:
//                         10(0)
//                         /  \
//                      5(1)  3(2)
//                     /   \
//                  4(3)    1(4)

//                 The heapify procedure calls itself recursively to build heap
//                 in top down manner.
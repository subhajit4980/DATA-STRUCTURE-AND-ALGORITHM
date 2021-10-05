// import java.util.*;
// import java.io.*;
// import java.lang.*;
public class leader_in_a_array {
    static void leader(int arr[]){
//////NAIVE SOLUTION////

        // for (int i = 0; i < arr.length; i++) {
        //     boolean flag =false;
        //   //  boolean ture;
        //     for (int j = i+1; j < arr.length; j++) {
        //         if(arr[i]<=arr[j])
        //         {
        //             flag=true;
        //             break;
        //         }
        //     }
        //     if (flag==false) {
        //         System.out.println(arr[i]+" ");
        //     }
        // }
        ///////EFFICENT SOLUTION//////
        int c_leader=arr[arr.length-1];
        System.out.println(c_leader);
        for (int i = arr.length-2; i >=0; i--) {
                if (c_leader<arr[i]) {
                    c_leader=arr[i];
                    System.out.println(c_leader);
                }
        }
    }
    public static void main(String[] args) {
        int arr[]={12,32,11,31,45,44,46,25,22};
        leader(arr);
    }
}

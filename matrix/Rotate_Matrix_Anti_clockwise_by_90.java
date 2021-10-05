
package matrix;
public class Rotate_Matrix_Anti_clockwise_by_90 {
// ======================NAIVE SOLUTION==========================>1
    // static void rotate(int arr[][]){
    //     int n=arr.length;
    //     int temp[][] =new int [n][n];
    //     for (int i = 0; i < arr.length; i++) {
    //         for (int j = 0; j < arr.length; j++) {
    //             temp[(arr.length)-j-1][i]=arr[i][j];
    //         }
    //     }
    //     for (int i = 0; i < temp.length; i++) {
    //        for (int j = 0; j < temp.length; j++) {
    //         arr[i][j]=temp[i][j];
    //        }
    //     }
    // }
    // ============================================================
    // =================SUFFICIENT SOLUTION========================>2
    static void rotate(int arr[][])
    {   int n=arr.length;
        for (int i = 0; i < arr.length; i++) {//[transpose of the matrix]
            for (int j = i+1; j < arr.length; j++) {// when we calculate transpose of a matrix   
                int temp=arr[i][j];                 //then 1st diagonal element are same so j=i+1
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
        for (int i = 0; i < arr.length; i++) {//rotate the column of the matrix
            int low=0,high=n-1;
            while(low<high)
            {
                int temp=arr[low][i];
                arr[low][i]=arr[high][i];
                arr[high][i]=temp;
                low++;
                high--;
            }

        }

    }
    public static void main(String[] args) {
        int matrix[][]={{12,34,56,78,90},
                        {12,34,56,78,90},
                        {12,34,56,78,90},
                        {12,34,56,78,90},
                        {12,34,56,78,90}};
                        int n=matrix.length;
                      rotate(matrix);
                      for(int i = 0; i < n; i++)
                      {
                          for(int j = 0; j < n; j++)
                          {
                              System.out.print(matrix[i][j]+" ");
                          }
              
                          System.out.println();
                      }	

    }
}

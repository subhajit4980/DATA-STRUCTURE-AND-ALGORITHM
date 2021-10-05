package matrix;
public class transpose_of_matrix {
    static int M=5;//number of column and row of the matrix
    static void transpose(int arr[][])
    {
        for (int i = 0; i < arr.length; i++) {
            for (int j = i+1; j < arr.length; j++) {// when we calculate transpose of a matrix   
                int temp=arr[i][j];                 //then 1st diagonal element are same so j=i+1
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }

    }
    public static void main(String[] args) {
        int arr[][]={
            {12,23,13,16,25},
            {14,27,53,36,45},
            {19,28,63,76,65},
            {15,21,73,46,75},
            {13,22,93,56,95}
        };
        transpose(arr); //call the transpose function
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                System.out.print(arr[i][j] + "  ");
            }
            System.out.println();
            System.out.println();
        }
    }
}

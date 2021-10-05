package matrix;
public class multidimansinal_array {
    public static void main(String[] args) {
        int row=4;
        int arr[][]=new int[row][];
        for(int i = 0; i < arr.length; i++)
        {
            arr[i]=new int [i+1];
            for (int j = 0; j < arr[i].length; j++) {
                arr[i][j]=i;
                System.out.print(arr[i][j]+ " ");
            }
            System.out.println();
        }
    }
}

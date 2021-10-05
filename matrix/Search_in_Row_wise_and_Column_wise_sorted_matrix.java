package matrix;
public class Search_in_Row_wise_and_Column_wise_sorted_matrix {
    static int R=4,C=4;
    static void search(int matrix[][],int x)
    {
        int i=0,j=C-1;
        while(i<R && i>=0){
            if(matrix[i][j]==x)
            {
                System.out.println("number present at"+"("+i+","+j+")");
                return;
            }
            else if(matrix[i][j]>x) 
            {
                j--;
            }
            else
            {
                i++;
            }
         }
         System.out.println("invalid");
    }
    public static void main(String[] args) {
        int matrix[][]={{10, 20, 30, 40},
                        {15, 25, 35, 45},
                        {32, 33, 39, 50},
                        {34, 37, 40, 55}};
                        int x=45;
                        search(matrix, x);
    }
}

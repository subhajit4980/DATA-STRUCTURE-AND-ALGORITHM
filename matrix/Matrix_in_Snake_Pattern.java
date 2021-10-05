package matrix;
public class Matrix_in_Snake_Pattern {
   
    static int R = 4, C = 4; //R is the row and C is coulmn of the matrix
	static void printSnake(int mat[][])
	{
		for(int i = 0; i < R; i++)
		{
			if(i % 2 == 0)//if the array row is even so it prints normal array
			{
				for(int j = 0; j < C; j++)
					System.out.print(mat[i][j] + " ");
			}
			else// here array is odd so it prints reversed array
			{
				for(int j = C - 1; j >= 0; j--)
					System.out.print(mat[i][j] + " ");
			}

		
		}
	}

	public static void main(String args[]) 
    {
        int arr[][] = {{1, 2, 3, 4},
    				   {5, 6, 7, 8},
    				   {9, 10, 11, 12},
    				   {13, 14, 15, 16}};

    	printSnake(arr);
    } 

}

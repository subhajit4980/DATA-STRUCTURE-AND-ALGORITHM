package matrix;
import java.util.Arrays;

public class MedianInRowSorted
{
static public int matMed(int mat[][], int r ,int c)
{
	int min = mat[0][0], max = mat[0][c-1];
	for (int i=1; i<r; i++)
	{
		if (mat[i][0] < min)
			min = mat[i][0];

		if (mat[i][c-1] > max)
			max = mat[i][c-1];
	}

	int medPos = (r * c + 1) / 2;
	while (min < max)
	{
		int mid = (min + max) / 2;
		int midPos = 0;
        int pos = 0;
		for (int i = 0; i < r; ++i){
			    pos = Arrays.binarySearch(mat[i],mid);

				// If element is not found in the array the
                // binarySearch() method returns
                // (-(insertion_point) - 1). So once we know
                // the insertion point we can find elements
                // Smaller than the searched element by the
                // following calculation
                
                if(pos < 0)
                    pos = Math.abs(pos) - 1;
					
                // If element is found in the array it returns
                // the index(any index in case of duplicate). So we go to last
                // index of element which will give  the number of
                // elements smaller than the number including
                // the searched element.  
                
                else
                {
                    while(pos < mat[i].length && mat[i][pos] == mid)
                        pos += 1;
                }
                  
                midPos = midPos + pos;
		}
		if (midPos < medPos)
			min = mid + 1;
		else
			max = mid;
	}
	return min;
}

public static void main(String[] args)
{
	int r = 3, c = 5;
	int m[][]= { {5,10,20,30,40}, {1,2,3,4,6}, {11,13,15,17,19} };
	System.out.println("Median is " + matMed(m, r, c)); 
	
}
}
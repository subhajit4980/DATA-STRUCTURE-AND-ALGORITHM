import java.util.HashSet;
import java.util.Set;

public class Intersection_of_two_arrays {
    public static void main(String[] args) {
        int[] arr1=new int []{12,34,56,78,90};
        int[] arr2=new int []{34,21,43,56,78,34};
        System.out.println(intersection(arr1, arr2));
    }
    static int intersection(int arr1[],int arr2[]){
        Set<Integer>e=new HashSet<>();
        int res=0;
        for(int a:arr1)
        {
            e.add(a);
        }
        for(int b:arr2)
        {
            if(e.contains(b))
            {
                res++;
                e.remove(b);
            }
        }

        return res;
    }
}

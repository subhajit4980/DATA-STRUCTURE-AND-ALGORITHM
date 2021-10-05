public class Sceondndlagest1 {
        static int largest(int arrr[])
        {
            int n=arrr.length;
            int res=0;
            for(int i=0;i<n;i++)
            {
                if(arrr[i]>arrr[res])
                {
                    res=i;
                }
            }
            return res;
        }
        ///naive solution
        public static void main(String[] args) {
            int arr[]={10,20,20,30,40};
            int rs=largest(arr);
            int res=-1;
            for(int i=0;i<arr.length;i++)
            {
                if(arr[i]!=arr[rs])
                {
                    if(res==-1)
                        res= i;
                    else if(arr[i]>arr[res])
                        res=i;
                }
            }
            System.out.println(arr[res]);

            ///sufficient solution
            int r=-1,l=0;
            for(int i=0;i<arr.length;i++)
            {
                if(arr[i]>arr[l])
                {
                    r=l;
                    l=i;
                }
                else if(arr[i]!=arr[l])
                {
                    if(r==-1 || arr[i]>arr[r])
                    {
                        r=i;
                    }
                }
            }
            System.out.println(arr[r]);
            
        }
    
}

// import java.util.*;
package sorting;
import java.io.*;
// import java.lang.*;
public class Powersetusingbitwiseoparetor{
    static void printpowset(String str)
  {
      
      StringBuffer stb=new StringBuffer(str);
      int n=stb.length();
      int powsize=(int)Math.pow(n,2);
      for(int c=0;c<powsize;c++)
      {
          for(int j=0;j<n;j++)
          {
              if((c &(1<<j))!=0)
              {
                  System.out.print(stb.charAt(j));
              }
                
          }
          System.out.println("\n");
      }
  }

    public static void main(String[] args) throws IOException {
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      String str=br.readLine();
      printpowset(str);
  }
    
}

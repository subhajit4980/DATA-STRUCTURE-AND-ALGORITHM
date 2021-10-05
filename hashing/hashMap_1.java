import java.util.HashMap;
// import java.util.Map.Entry;
import java.util.*;
public class hashMap_1 {

    public static void main(String[] args) {
        HashMap<String, Integer> m=new HashMap<String,Integer>();
        m.put("cat", 23);
        m.put("dog", 13);
        m.put("cow", 20);
        m.put("ant", 5);
        System.out.println(m);// print the hashMap
        System.out.println(m.size());
        for(Map.Entry<String,Integer>a:m.entrySet())//Itarator to print the hashmap
        {
            System.out.println(a.getKey()+" "+a.getValue());
        }
        if (m.containsKey("dog")) { // check the map contains this key or not
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
        m.remove("dog");//remove the key from the map
        System.out.println(m.size());
        System.out.println(m);
        if (m.containsValue(5)) { // check the map contains this value or not
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
        System.out.println(m.get("dog"));// by this get method we get value of hte key if present or null 
        System.out.println(m.get("cow"));
    }
}

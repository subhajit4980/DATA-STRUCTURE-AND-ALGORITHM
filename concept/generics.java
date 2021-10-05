package concept;
import java.util.*;
/**
 * generics
 */
// create own generics
class container <T extends Number>
{
    T value; //the type of value is T(Integer/Double/Float)
    public void show()
    {
        System.out.println(value.getClass().getName());
    }
    public T getValue() {
        return value;
    }
    public void setValue(T value) {
        this.value = value;
    }
}
public class generics {
public static void main(String[] args) {
    // int value=5;
    List<Integer> values= new ArrayList<Integer>();
    values.add(5);
    // values.add("subha");
    // container<Integer> obj=new container<>();
    // obj.value=1;
    // obj.show();
    container<Double> obj1=new container<>();
    obj1.value=1.2;
    obj1.show();
    // container<Float> obj2=new container<>();
    // obj2.value=1.2323;
    // obj2.show();
    // container <String> obj3=new container<>();
    // obj3.value="subhajit";
    // obj3.show();
}
    
}
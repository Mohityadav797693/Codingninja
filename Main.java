import java.util.*;

public class Main{
    public static void main(String [] args){
System.out.println("Hello World");
      Scanner s = new Scanner(System.in);
        int p = s.nextInt();
      Scanner r = new Scanner(System.in);
        int c = r.nextInt();
      Scanner u = new Scanner(System.in);
        int m = u.nextInt();
        int t = p + c + m;
      if(p<34){
        System.out.println("fail");
      }
      else if(c<34){
        System.out.println("fail");
      }
      else if(m<34){
        System.out.println("fail");
      }
      else if (t<120){
        System.out.println("fail");
      }
      else{
        System.out.println("pass");
      }
      
    }
}
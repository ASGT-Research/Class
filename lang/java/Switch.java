import java.util.*;
public class Switch{
  public static void main(String b[]) {
    String a = "f" ;
    String res;

    switch (a) {
      case "a"-> res ="mon";
      case "b"-> res ="tue";
      case "c"-> res ="wed";
      case "d"-> res ="thers";
      case "e"-> res ="fri";
      case "f"-> res ="sat";
      case "g"-> res ="sun";

      default-> res ="wong";
      
    }
   System.out.println(res);
  }
}

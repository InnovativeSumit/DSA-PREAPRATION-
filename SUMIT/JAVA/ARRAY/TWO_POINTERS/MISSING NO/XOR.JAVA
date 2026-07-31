// BETTER/OPTIMAL APPROACH ==> SINGLE LOOP XOR APPROACH
// TC = O(n)
// SC = O(1)
import java.util.*;
public class XOR{
    
    static int missing(int[] arr) {
    int m = arr.length;// 4
    int n = m+1;//5
    int xor1= 0;
    int xor2 = 0;
    for (int i = 0; i < m ; i++) {
        xor2 = xor2^arr[i];
        xor1 = xor1^(i+1);
        }
    xor1 = xor1^n;
    return xor1^xor2;

    }

public static void  main(String[]args) {
    int[] arr = {1, 3, 4, 5};
    System.out.println("The missing no is : " + missing(arr));
    
}
}


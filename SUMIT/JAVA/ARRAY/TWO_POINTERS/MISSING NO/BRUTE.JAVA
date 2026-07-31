// FIND THE MISSING NOS
// BRUTE FORCE ==> USING TWO FOR LOOPS
// TC = O(N)
// SC = O(1)
import java.util.*;
public class BRUTE {
    static void missing(int[] arr) {
        int n = arr.length;
        int[] hash = new int[n + 2];
        for (int i = 0; i < n; i++) {
            hash[arr[i]] = 1;
        }
        for (int i = 1; i <= n + 1; i++) {
            if (hash[i] == 0) {
                System.out.println("Missing number: " + i);
                break;
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 4, 5};
        missing(arr);
    }
}
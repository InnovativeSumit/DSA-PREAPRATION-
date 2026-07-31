// FIND THE MISSING NOS
// OPTIMAL APPROACH => MATHEMATICAL OBSERVATION
// TC = O(N)
// SC = O(1)

import java.util.*;
public class SUM{

    static int missing(int[] arr) {
    	int n = arr.length;
		int sum1 = ((n + 1) * (n + 2)) / 2;
		int sum2 = 0;
		for (int i = 0; i < n; i++) {
			sum2 = sum2 +  arr[i];
		}
		return (sum1 - sum2);
    }

public static void main(String[]args) {
    int[]arr = {1, 2, 4, 5};
    System.out.println("The missing no is : " + missing(arr));
    return 0;
}
}
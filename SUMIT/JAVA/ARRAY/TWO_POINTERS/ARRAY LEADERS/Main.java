// TC = O(n)
// SC = O(1)
import java.util.*;
public class Main{

    static int[] arrayLeaders(int[] arr)
    {
        int n = arr.length;
        int[] ans = new int[n];
        int maxi = Integer.MIN_VALUE;
        int idx = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] > maxi){
                ans[idx++] = arr[i];
            }
            maxi = Math.max(arr[i], maxi);
        }

        // Reverse the array
        for (int i = 0; i < idx / 2; i++)
        {
            int temp = ans[i];
            ans[i] = ans[idx - i - 1];
            ans[idx - i - 1] = temp;
        }
        return ans;
    }

public
    static void main(String[] args)
    {
        int[] arr = {12, 3, 4, 8, 9, 6};
        int[] res = arrayLeaders(arr);
        for (int x : res)
        {
            System.out.print(x + " ");
        }
    }
}
}

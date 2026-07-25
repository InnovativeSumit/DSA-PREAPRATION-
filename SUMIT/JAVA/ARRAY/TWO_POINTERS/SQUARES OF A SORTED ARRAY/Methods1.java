// SQAURES OF A SORTED Arrays
// TC ==> O(NLOGN)
//S C ==> O(1)
import java.util.*;
public class Methods1 {
    static void sortedSquares(int[] nums) {
        int n = nums.length;
        for(int i = 0 ; i< n ; i++){
            if(nums[i] < 0){
                nums[i] = -nums[i];
            }
            nums[i] = nums[i]*nums[i];
        }
     Arrays.sort(nums);
    }
public static void main(String[]args){
    int[]nums = {-2,-4,-6,8,7,5};
    sortedSquares(nums);
    for(int x : nums){
        System.out.print(x+" ");
    }
    
}
}
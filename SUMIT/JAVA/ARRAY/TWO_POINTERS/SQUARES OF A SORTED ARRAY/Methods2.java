// SQAURES OF A SORTED Arrays
// TC ==> O(N)
// SC ==> O(1)
import java.util.*;
public class Methods2 {
    static void sortedSquares(int[] nums) {
        int n = nums.length;
        int low = 0;
        int high = n-1;
        int index = n-1;

        while(low<=high){
            int leftsq = nums[low]*nums[low];
            int rightsq = nums[high]*nums[high];

            if(leftsq>rightsq){
                nums[index]=leftsq;
                low++;
            }

            else{
                nums[index]=rightsq;
                high--;
            }
            index--;
        }
       
    }
    
    
public static void main(String[]args){
    int[]nums = {-2,-4,-6,8,7,5};
    sortedSquares(nums);
    for(int x : nums){
        System.out.print(x+" ");
    }
    
}
}
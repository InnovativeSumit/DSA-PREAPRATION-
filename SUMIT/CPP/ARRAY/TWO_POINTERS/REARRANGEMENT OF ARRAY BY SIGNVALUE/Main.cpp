// REARRANGE ARRAY ELEMENTS BY SIGN VALUES
//.TC => O(N)
// SC =>O(N)
#include<bits/stdc++.h>
using namespace std;
    vector<int> rearrangeArray (vector<int>&nums) {
        int n = nums.size();
        vector<int>temp(n);
        int pos = 0; // Even Indices
        int neg = 1; // Odd Indices
        for(int i = 0 ; i < n ; i++){
            if(nums[i]>0){
                temp[pos]= nums[i];
                pos = pos+2;
            }
            else{
                temp[neg] = nums[i];
                neg = neg +2;
            }
        }
        return temp;
    }
    
    
    int main(){
        vector<int>nums = {7,6,8,-9,7,-9,-8,-5};
        vector<int>result = rearrangeArray(nums);
        for(int x : result){
           cout<<x<<" ";
        }
    }

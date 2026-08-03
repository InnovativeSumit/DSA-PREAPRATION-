// TC = O(n)
// SC = O(1)
#include<bits/stdc++.h>
using namespace std;

vector<int> arrayLeaders(vector<int> &arr){
    vector<int> ans;
    int n = arr.size();
    int maxi = INT_MIN;
    
    for(int i = n-1; i>=0 ; i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }
        maxi = max(arr[i],maxi);
    }
    
    reverse (ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<int> arr = {12, 3, 4,8,9,6};
    vector <int> res = arrayLeaders(arr);
    for( int x : res){
        cout<<x<<" ";
    }
    return 0;
    
}
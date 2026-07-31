// Better approach to find the missing no in arrays  using  single loop xor approach
// TC = O(n)
// SC = O(1)
#include <bits/stdc++.h>
using namespace std;

int missing(vector<int>& arr) {
    int m = arr.size();// 4
    int n = m+1;//5
    int xor1= 0;
    int xor2 = 0;
    for (int i = 0; i < n; i++) {
        xor2 = xor2^arr[i];
        xor1 = xor1^(i+1);
        }
    return xor1^xor2;

    }

int main() {
    vector<int> arr = {1, 3, 4, 5};
    cout<<missing(arr);
    return 0;
}
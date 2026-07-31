// Better approach to find the missing no in arrays  using sum approach
// TC = O(n)
// SC = O(1)
#include <bits/stdc++.h>
using namespace std;

int missing(vector<int>& arr) {
    int n = arr.size();
    int sum1 = ((n + 1) * (n + 2)) / 2;
    int sum2 = 0;
    for (int i = 0; i < n; i++) {
        sum2+= arr[i];
    }
    return (sum2-sum1);

    }

int main() {
    vector<int> arr = {1, 2, 4, 5};
    cout<<missing(arr);
    return 0;
}
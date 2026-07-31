// Better approach to find the missing no in arrays 
// TC = O(n)
// SC = O(1)
#include <bits/stdc++.h>
using namespace std;

void missing(vector<int>& arr) {
    int n = arr.size();
    vector<int> hash(n + 1, 0);
    
    for (int i = 0; i < n+1; i++) {
        hash[arr[i]] = 1;
    }

    for (int i = 1; i <= n + 1; i++) {
        if (hash[i] == 0) {
            cout << "Missing number: " << i << endl;
            break;
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 4, 5};
    missing(arr);
    return 0;
}
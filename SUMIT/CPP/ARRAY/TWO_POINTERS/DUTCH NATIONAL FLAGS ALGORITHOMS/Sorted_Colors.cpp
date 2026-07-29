#include<bits/stdc++.h>
using namespace std;
    
    void sortedArray(vector<int>&array, int n) {
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high) {
        if (array[mid] == 0) {
            swap(array[low], array[mid]);
            low++;
            mid++;
        }
        else if (array[mid] == 1) {
            mid++;
        }
        else { // array[mid] == 2
            swap(array[mid], array[high]);
            high--;
        }
    }
}
int  main() {
    vector<int>array = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    int n = array.size();
    sortedArray(array, n);
    for (int x : array) {
       cout<<x<<" ";
    }
    
}


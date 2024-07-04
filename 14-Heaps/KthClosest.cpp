#include <bits/stdc++.h>
using namespace std;
// Question Link : https://leetcode.com/problems/find-k-closest-elements/
//Learned the use of pairs in heap

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> v;
        priority_queue<pair<int, int>> maxHeap;
        for (auto i : arr) {
            maxHeap.push({abs(i - x), i});
            if (maxHeap.size() > k) {
                maxHeap.pop();
            }
        }
        while (!maxHeap.empty()) {
            v.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        sort(v.begin(), v.end());
        return v;
    }
};

void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    Solution sol;

    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    int x = 3;
    vector<int> result = sol.findClosestElements(arr, k, x);
    cout << "The " << k << " closest elements to " << x << " are: ";
    printVector(result);

    return 0;
}

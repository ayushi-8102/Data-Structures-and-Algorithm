#include <bits/stdc++.h>
using namespace std;
//Question Link : https://leetcode.com/problems/top-k-frequent-elements/ if (largest, gratest top)--> generally minH; for(closest,smallest, minimum)--> Max heap
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (auto& it : nums) mp[it]++;
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for (auto& it : mp) {
            if (pq.size() < k)
                pq.push({it.second, it.first});
            else if (pq.size() == k && pq.top().first < it.second) {
                pq.pop();
                pq.push({it.second, it.first});
            }
        }
        
        vector<int> ans;
        while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
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

    // Test case
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    vector<int> result = sol.topKFrequent(nums, k);

    // Print the result
    cout << "Top " << k << " frequent elements are: ";
    printVector(result);

    return 0;
}

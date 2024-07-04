//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
//Problem : Nearly Sorted element : https://www.geeksforgeeks.org/problems/nearly-sorted-1587115620/1

// } Driver Code Ends
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int K){
        // Your code here
        vector<int>nums;
        priority_queue<int,vector<int>,greater<int>> minHeap;
        for(int i=0;i<num;i++){
            minHeap.push(arr[i]);
            if(minHeap.size()>K){
                int n=minHeap.top();
                minHeap.pop();
                nums.push_back(n);
            }
        }
        while(!minHeap.empty()){
        nums.push_back(minHeap.top());
        minHeap.pop();
        }
        return nums;
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}

// } Driver Code Ends
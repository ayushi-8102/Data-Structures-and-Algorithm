// User function template in C++
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to find minimum number of pages.
    bool isValid(int arr[],int n,int m, int mid){
        int stu=1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>mid){
                stu++;
                sum=arr[i];
            }
        }
        if(stu>m)return false;
        return true;
    }
    long long findPages(int n, int arr[], int m) {
        // code here
        if(m>n)return -1;
        int* maxElement=max_element(arr,arr+n);
        int s = *maxElement;
        int sum=0;
        for(int i=0;i<n;i++)sum+=arr[i];
        int e=sum;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isValid(arr,n,m,mid)==true){
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int m;
        cin >> m;
        Solution ob;
        cout << ob.findPages(n, A, m) << endl;
    }
    return 0;
}
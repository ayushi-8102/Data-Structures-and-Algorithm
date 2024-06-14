
/*
the main concept of Binary Search is it can be applied on any function that is monotonically increasing or monotonically decreasing.
Here, We have unsorted array. and the rest condition looks similar to BS.
Here, the tricky part is we have to find the BS condition (Nums[mid]==k) looking as per need.
And based upon criteria and question we will look that whether we can move left or right.


Best Question --> Find Peak Element
Problem Statement -> 
A peak element is an element that is greater than its neighbors.
Given an input array nums, where nums[i] ≠ nums[i+1], find a peak element and return its index.
The array may contain multiple peaks, in that case return the index to any one of the peaks is fine.
You may imagine that nums[-1] = nums[n] = -∞.

Example :

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.

now here we have unsorted array and for peak element we can say that 'n' is peak if it is greater than both 'n+1'&'n-1'
also if we mid is not satisfying the condition, then we have to decide whether we will be moving left of right so, again it depends upon monotonous increasing. ex -> if I have an array say -> ....5 10 20... here 10 is mid, so by observing we can say that the probability of finding peak element is more on right side. so we move right it is also applicable vica versa. 
We also have two edges as edge cases so on the 0 index we have to compare it with 1st elemet only and on the right most end we will check with size()-2 element only.

Imagine it as climbing a peak. Now the left and right ends are at -infinity and there is no plateau so there is a  peak to be guaranteed. Now check the middle element,if the next element is less this means that we are on our downward journey in the peak,so the peak is at the left part i.e end=mid (Note:This element might be the peak as the next element is less therefore we included it).And if the next element is greater than the current,this means that we are climbing the peak therefore peak happens to be on the right part(Note:This element can't be the peak).So s=mid+1

*/

//Code
#include<bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int>& nums) {
    int l=0;
    int r=nums.size()-1;
    while(l<r){
        int mid=l+(r-l)/2;
        if(mid>0&&mid<nums.size()-1){
            if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1])return mid;
            else if(nums[mid]<nums[mid+1])l=mid+1;
            else if(nums[mid]<nums[mid-1])r=mid-1;
        }
        else if(mid==0)
           return nums[mid]>nums[mid+1]? mid:1;
        else if(mid==nums.size()-1)return nums[mid]>nums[mid-1]? mid:mid-1;

    }
    return l;
}
int main(){
  int n;
  cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
      cin>>nums[i];
    cout<<findPeakElement(nums);
}
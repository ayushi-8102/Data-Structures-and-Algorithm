
#include <bits/stdc++.h>
using namespace std;

int binarySearchReverseSortedArray(int arr[],int n,int key)
{
	int start=0;
	int end=n-1;
	
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]>key)
		{
			start=mid+1;
		}
		else if(arr[mid]<key)
		{
			end=mid-1;
		}
	}
	return -1;
}
void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<< " ";
	cout<<endl;
}
int main()
{
	int arr[]={20,17,15,14,13,12,10,9,8,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	//printing the original array
	cout<<"\n\tOriginal Array is::";
	printArray(arr,n);
	int key=10;
	cout<<"\n\tIndex of key element is::"<<binarySearchReverseSortedArray(arr,n,key);
          return 0;
}
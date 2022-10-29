#include <bits/stdc++.h>
using namespace std;

int binary_search_recursive(vector<int> &arr,int low,int high,int target){
	if(low>high) return -1;
	int mid = low + (high - low) / 2;
	if(arr[mid]==target) return mid;
	if(arr[mid]<target) return binary_search_recursive(arr,mid+1,high,target);
	return binary_search_recursive(arr,low,mid-1,target);
}


int binary_search_iterative(vector<int> &arr,int target){
	int low = 0,high = arr.size() - 1;
	while(low<=high){
		int mid = low + (high - low) / 2;
		if(arr[mid]==target) return mid;
		else if(arr[mid]<target) low = mid + 1;
		else high = mid - 1;
	}
	return -1;
}

int main(){
	int n,target;
	cin>>n>>target;
	vector<int> arr(n);
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	cout<<binary_search_recursive(arr,0,n-1,target);
	cout<<endl;

	cout<<binary_search_iterative(arr,target);
	cout<<endl;
	return 0;
}
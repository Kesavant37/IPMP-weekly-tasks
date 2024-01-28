#include <bits/stdc++.h>
int searchInsert(vector<int>& arr, int x)
{
	int n=arr.size();
	int low=0;
	int high=n-1;
	int ans=n;
	int mid;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]>x)
		  high=mid-1;
		else if(arr[mid]==x){
		  ans=mid;
		  break;
	} 
		else 
		  low=mid+1;
	}
	if(ans!=n)
		return ans;
	
	
	  return low;
	

}

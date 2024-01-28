int lowerBound(vector<int> arr, int n, int x) {
	int low=0;
	int high=n-1;
	int ans=n;
	int mid=(n-1)/2;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==x)
		   {
			   high=mid-1;
			   ans=mid;
		   }
		else if(arr[mid]<x){
			low=mid+1;
		}
		else{
			high=mid-1;
			ans=mid;
		}
	}
	return ans;
}

int upperBound(vector<int> &arr, int x, int n){
	int low=0;
	int high=n-1;
	int mid=(low+high)/2;
	int ans=n;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==x){
			low=mid+1;
		}
		else if(arr[mid]>x){
			ans=mid;
			high=mid-1;
		}
		else if(arr[mid]<x){
			low=mid+1;

		}
	}	
	return ans;
}

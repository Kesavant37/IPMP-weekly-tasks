pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x) {
	pair<int,int>ans;
	int low=0;
	int high=n-1;
	int mid=(low+high)/2;
	int s1;
	int flag=0;
	
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==x){
			s1=mid;
			flag=1;
			
			break;
			
		}
		else if(arr[mid]>x){
			
			high=mid-1;
		}
		else if(arr[mid]<x){
			low=mid+1;

		}
	}
	if(low==n){
		ans.first=arr[n-1];
		ans.second=-1;
	}
	else if(high==-1)
	{
		ans.first=-1;
		ans.second=arr[0];
	}
	else if(flag==1){
		ans.first=arr[s1];
		ans.second=arr[s1];

	}
	else{
		ans.first=arr[high];
		ans.second=arr[low];
	}
	return ans;

	  
	   
	    
}

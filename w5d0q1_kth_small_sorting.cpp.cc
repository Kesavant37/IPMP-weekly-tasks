int count(int arr[],int n, int k)
{
	// function to calculate number of elements less than
	// equal to mid
	int cnt = 0;

	for (int i = 0; i < n; i++)
		if (arr[i] <= k)
			cnt++;

	return cnt;
}
    int kthSmallest(int arr[], int l, int r, int k) {
        int n=r-l+1;
        int low=INT_MAX,mid;
        int high=INT_MIN;
        
        for(int i=l;i<=r;i++){
            low=min(low,arr[i]);
            high=max(high,arr[i]);
            
        }
        while(low<=high){
            mid=low+(high-low)/2;
            if(count(arr,n,mid)>k)
              high=mid-1;
            else if(count(arr,n,mid)==k)
              high=mid-1;
            else  
              low=mid+1;
            
        }
        return low;
        //code here
    }
};

class Solution{
public:	
	// Function for finding maximum and value pair
	int check(int res,int arr[],int n){
	    int cnt=0;
	    for(int i=0;i<n;i++){
	      if((res&arr[i])==res)
	        cnt++;
	    }
	      return cnt;
	}
	int maxAND (int arr[], int n)
	{
	    int res=0,count;
	    for(int i=31;i>=0;i--){
	        count=check(res|(1<<i),arr,n);
	    
	    if(count>=2)
	      res=res|(1<<i);
	    }
	    return res;
	}
};

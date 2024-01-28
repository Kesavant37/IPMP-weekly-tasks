class Solution{
public:
    int check(vector<int> &arr,int m){
        int low=0;
        int high=m-1;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]==1)
               high=mid-1;
            else
              low=mid+1;
        }
        return (m-low);
    }
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int ch;
	    int index=-1;
	    int ans=0;
	    for(int i=0;i<n;i++){
	      ch=check(arr[i],m);
	       if(ch>ans){
	           ans=ch;
	           index=i;
	       }
	      }
	      return index;
	    }
	    
	      
	


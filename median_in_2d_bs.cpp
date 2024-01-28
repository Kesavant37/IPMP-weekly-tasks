class Solution{   
public:
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
   int count(vector<vector<int>> &matrix, int R, int C,int mid){
       int cnt=0;
       for(int i=0;i<R;i++){
           cnt+=upperBound(matrix[i],mid,C);
       }
       return cnt;
   }




    int median(vector<vector<int>> &matrix, int R, int C){
        int low=INT_MAX,mid;
        int high=INT_MIN;
        int req=(R*C)/2;
        for(int i=0;i<R;i++){
            if(low>matrix[i][0])
              low=matrix[i][0];
        }
        for(int i=0;i<R;i++){
            if(high<matrix[i][C-1])
              high=matrix[i][C-1];
        }
        
        while(low<=high)
        {
            mid=(low+high)/2;
            
            if(count(matrix,R,C,mid)>req)
               high=mid-1;
            else 
              low=mid+1;
            
        }
        return low;
       
        
        
                
    }
};

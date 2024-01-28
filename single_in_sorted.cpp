int singleNonDuplicate(vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(n==1)return arr[0];
            
            else if(arr[mid]==arr[mid+1]){
                if((high-mid+1)%2==0)
                    high=mid-1;
                else 
                  low=mid+2;
            }
            else if(mid!=0&&arr[mid]==arr[mid-1]){
                if((mid-low+1)%2==0)
                   low=mid+1;
                else
                  high=mid-2;
            }
            else
              return arr[mid];
        }
        return -1;
        
 

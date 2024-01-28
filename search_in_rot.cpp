bool Search(int n, vector<int>& arr, int x) {
        int low=0;
        int high=n-1;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]==x)
              return 1;
            else {
                if(arr[mid]==arr[low]&&arr[mid]==arr[high]){
                   low++;
                   high--;
                }
                else if(arr[low]<arr[mid]){
                    if(x>=arr[low]&&x<=arr[mid])
                      high=mid-1;
                    else 
                       low=mid+1;
                }
                
                else {
                    if(x>=arr[mid]&&x<=arr[high])
                      low=mid+1;
                    else 
                       high=mid-1;
                }
            }
        }
        return 0;
        
    }
};

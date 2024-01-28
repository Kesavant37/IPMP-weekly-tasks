int findMin(vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        int mid;
        int min=INT_MAX;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]>arr[low]){
                if(arr[low]<min){
                  min=arr[low];
                  
                }
                low=mid+1;
            }
            else if(arr[low]==arr[mid]){
                if(arr[low]<min)
                  min=arr[low];
                low++;
            }
            else{
                if(arr[mid]<min)
                  min=arr[mid];
                high=mid-1;
            }
        }
        return min;

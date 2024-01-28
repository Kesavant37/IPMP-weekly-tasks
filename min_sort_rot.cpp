int findMin(int arr[], int n){
        int low=0;
        int high=n-1;
        int mid;
        int min=INT_MAX;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]>=arr[low]){
                if(arr[low]<min){
                  min=arr[low];
                  
                }
                low=mid+1;
            }
            else{
                if(arr[mid]<min)
                  min=arr[mid];
                high=mid-1;
            }
        }
        return min;
       
    }

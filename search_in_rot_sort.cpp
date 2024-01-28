int search(int arr[], int low, int high, int x){
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]==x)
                  return mid;
            
             else if(arr[low]>=arr[mid])
                   {
                       if(arr[mid]<x&&arr[high]>=x)
                          low=mid+1;
                        else 
                           high=mid-1;
                   }
             else {
                     if(arr[mid]>x&&arr[low]<=x)
                        high=mid-1;
                    else 
                       low=mid+1;
                     
                 }
            }
            
            
        
        return -1;
        
    }

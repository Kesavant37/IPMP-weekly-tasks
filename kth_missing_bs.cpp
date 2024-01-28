int KthMissingElement(int arr[], int n, int k)
{
    int low=0;
    int high=n-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if((arr[mid]-(arr[0]+mid))<k)
          low=mid+1;
        else
          high=mid-1;
    }
       if(low==n){
           if((high-1+arr[0]+k)>arr[n-1])
             return -1;
            return (high-1+arr[0]+k);
       }
         //return (high-1+arr[0]+k);
        
         else {
             if((low-1+arr[0]+k)>arr[n-1])
                return -1;
          return (low-1+arr[0]+k);
     
    }

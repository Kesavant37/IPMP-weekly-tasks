long long int cnt=0;
    void merge(long long int arr[],long long int l,long long int mid,long long int r){
        long long int arr1[mid-l+1];
        long long int arr2[r-mid];
        long long t1=0,t2=0;
        for(long long int i=l;i<=mid;i++){
            arr1[t1]=arr[i];
            t1++;
        }
        for(long long int i=mid+1;i<=r;i++){
            arr2[t2]=arr[i];
            t2++;
        }
        long long int i=0,j=0,k=l;
        while (i < t1 && j < t2) {
            if (arr1[i] <= arr2[j]) {
                arr[k] = arr1[i];
                i++;
            } else {
                arr[k] = arr2[j];
                j++;
                cnt += (t1 - i);
            }
            k++;
        }
    
        while (i < t1) {
            arr[k] = arr1[i];
            i++;
            k++;
        }
    
        while (j < t2) {
            arr[k] = arr2[j];
            j++;
            k++;
        }
        
        
    }
    void mergesort(long long int arr[],long long int l,long long int r){
        long long int mid=l+(r-l)/2;
        if(l<r){
            mergesort(arr,l,mid);
            mergesort(arr,mid+1,r);
            merge(arr,l,mid,r);
            
        }
    }
    long long int inversionCount(long long arr[], long long N)
    {
        mergesort(arr,0,N-1);
        return cnt;
        
        
       
    }


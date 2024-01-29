int largest(vector<int> &arr, int n)
    {
        int min=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>min)
               min=arr[i];
        }
        return min;
        
    }

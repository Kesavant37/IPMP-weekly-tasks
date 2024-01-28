   vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        int low=0;
        int high=n-1;
        int mid=(low+high)/2;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]==x){
                low=mid;
                high=mid;
                break;
            }
            else if(arr[mid]>x){
                high=mid-1;
            }
            else
               low=mid+1;
        }
        if(low==high)
          {
              while(low!=0&&arr[low]==arr[low-1])
                low--;
              while(high!=(n-1)&&arr[high]==arr[high+1])
                high++;
          }
        if(low<=high)
           {
               vector<int>ans;
               ans.push_back(low);
               ans.push_back(high);
               return ans;
           }
        else 
           {
               vector<int>ans;
               ans.push_back(-1);
               return ans;
           }
        
    }
};

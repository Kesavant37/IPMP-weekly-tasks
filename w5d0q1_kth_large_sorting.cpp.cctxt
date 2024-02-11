int count(vector<int>& nums,int mid){
            int cnt=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]>=mid)
                  cnt++;
            }
            return cnt;
    }
    int findKthLargest(vector<int>& nums, int k) {
        int low=INT_MAX,mid;
        int high=INT_MIN;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            low=min(low,nums[i]);
            high=max(high,nums[i]);
        }
        while(low<=high){
            mid=low+(high-low)/2;
            if(count(nums,mid)<k)
              high=mid-1;
            else
              low=mid+1;
        }
        return high;

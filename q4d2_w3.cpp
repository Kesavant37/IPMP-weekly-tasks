int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
          sum+=nums[i];
        int max1=nums[0];
        int curr_max=nums[0];
        int min1=nums[0];
        int curr_min=nums[0];
        for(int i=1;i<nums.size();i++){
            curr_max=max(nums[i],curr_max+nums[i]);
            max1=max(curr_max,max1);
            curr_min=min(nums[i],curr_min+nums[i]);
            min1=min(curr_min,min1);
        }
        if(curr_min==sum)
          return max1;
        else 
          return max(max1,(sum-min1));
            


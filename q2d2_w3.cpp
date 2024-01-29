int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max = INT_MIN;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (sum == 0 && nums[i] < 0){
                
                if(nums[i]>max)
                  max=nums[i];
                continue;
            }
            else if (sum >= 0) {
                sum += nums[i];
                if (sum > max)
                    max = sum;
                else if (sum < 0)
                    sum = 0;
            }
            
        }
        return max;
    }

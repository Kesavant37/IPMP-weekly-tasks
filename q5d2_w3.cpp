int majorityElement(vector<int>& nums) {
        map<int, int> ans;
        int maj;
        for (int i = 0; i < nums.size(); i++) {
            if (ans.find(nums[i]) == ans.end()){
                ans[nums[i]] = 1;
                maj=nums[i];}
            else {
                ans[nums[i]]++;
                if(ans[nums[i]]>(nums.size())/2)
                   return nums[i];    
            }
        }
        return maj;
       
        
    }

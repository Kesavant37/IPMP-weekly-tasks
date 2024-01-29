int removeDuplicates(vector<int>& nums) {
        vector<int>unique;
        unique.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1])
              unique.push_back(nums[i]);
        }
        int k=unique.size();
        for(int i=0;i<unique.size();i++)
           nums[i]=unique[i];
        return k;
    }

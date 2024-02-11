vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int temp;
        //int ans1,ans2;
        vector<int>ans;
        for(int i=0;i<n;i++){
            temp=target-nums[i];
            if(mp.find(temp)!=mp.end()){
                //ans2=i;
                ans.push_back(mp[temp]);
                ans.push_back(i);
                break;
            } 
            mp[nums[i]]=i;   
        }
        return ans;

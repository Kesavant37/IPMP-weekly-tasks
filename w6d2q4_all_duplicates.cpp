class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(auto itr = mp.begin();itr != mp.end();itr++){
            if(itr->second>1) ans.push_back(itr->first);
        }
        return ans;
    }
};

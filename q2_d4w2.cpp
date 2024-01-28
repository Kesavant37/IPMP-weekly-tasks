class Solution {
public:
    void check(vector<int>& nums, vector<vector<int>>& ans, int i){
        if(i >= nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int j=i; j<nums.size(); j++){
            swap(nums[i], nums[j]);
            check(nums, ans, i+1);
            swap(nums[i], nums[j]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int i = 0;
        vector<vector<int>> ans;
        vector<vector<int>> ans1;
        check(nums, ans, i);
        set<vector<int>> temp;
        for(auto it : ans){
            temp.insert(it);
        }
        for(auto it : temp){
            ans1.push_back(it);
        }
        return ans1;
    }
};

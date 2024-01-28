class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        ans.push_back(vector<int>());        
        for (int i= 0 ; i<nums.size(); i++)
        {
            int n=ans.size();
            for( int j=0;j<n;j++)
            {
                vector<int>temp = ans[j];
                temp.push_back(nums[i]);
                ans.push_back(temp);
            }
        }
        for(int i=0;i<ans.size();i++){
            sort(ans[i].begin(),ans[i].end());
        }
        sort(ans.begin(),ans.end());
        ans.erase(std::unique(ans.begin(), ans.end()), ans.end());
        return ans;
       
    }
};

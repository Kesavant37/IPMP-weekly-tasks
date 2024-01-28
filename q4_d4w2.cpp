lass Solution {
public:
    void check(int index, int n,  vector<vector<int>> &ans, vector<int> &nums) {
        if(index >= n) {
            ans.push_back(nums);
            return;
        }

        for(int i=index; i<n; i++) {
            swap(nums[i], nums[index]);
            check(index+1, n, ans, nums);
            swap(nums[i], nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        check(0, n, ans, nums);
        return ans;
    }

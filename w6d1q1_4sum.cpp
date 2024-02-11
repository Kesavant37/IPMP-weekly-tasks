#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long int low, high, k, temp;
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            if (i != 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < n; j++) {
                if (j!=i+1 && nums[j] == nums[j - 1])
                    continue;
                k = nums[i] + nums[j];
                low = j + 1;
                high = n - 1;
                while (low < high) {
                    
                    temp = nums[low] + nums[high];
                    if(temp+k==target){
                        vector<int> temp1;
                        temp1.push_back(nums[i]);
                        temp1.push_back(nums[j]);
                        temp1.push_back(nums[low]);
                        temp1.push_back(nums[high]);
                        ans.push_back(temp1);
                        low++;
                        high--;
                        while (low < high &&  nums[low] == nums[low - 1])
                        low++;
                        while (low < high && nums[high] == nums[high + 1])
                        high--;
                        
                    }
                    else if (temp + k < target){
                        low++;
                        while (low < high &&  nums[low] == nums[low - 1])
                        low++;
                    }
                    else if (temp + k > target){
                        high--;
                         while (low < high && nums[high] == nums[high + 1])
                        high--;
                    }
                    
                    
                   
                }
            }
        }
        return ans;
    }
};

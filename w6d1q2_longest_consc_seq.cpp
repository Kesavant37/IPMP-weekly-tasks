class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        set<int>val;
        for(int i=0;i<nums.size();i++){
            val.insert(nums[i]);
        }
        int temp=*val.begin();
        int tmpcnt=1;
        int cnt=1;
        
        for(auto itr=++val.begin();itr!=val.end();itr++){
            if(*itr!=temp+1){
                tmpcnt=1;
                temp=*itr;
                
            }
            else{
                tmpcnt++;
                cnt=max(cnt,tmpcnt);
                temp++;
            }
        }
        return cnt;
        
    }
};

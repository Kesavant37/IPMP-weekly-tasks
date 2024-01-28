class Solution {
public:
    bool check(vector<int>& nums,int mid, int h){
        long long int h1=0;
        for(int i=0;i<nums.size();i++){
            if((nums[i]%mid)==0)
               h1=h1+(nums[i]/mid);
            else
              h1=h1+1+(nums[i]/mid);
          
        }
        if(h1>h) return false;
        return true;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int ans=INT_MAX,mid;
        int n=nums.size();
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            mid=low+(high-low)/2;
            if(check(nums,mid,threshold)){
                
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};

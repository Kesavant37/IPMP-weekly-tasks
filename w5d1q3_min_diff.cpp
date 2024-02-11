int  minimum_difference(vector<int>nums){
   	    sort(nums.begin(),nums.end());
   	    int diff=INT_MAX,tempdiff;
   	    for(int i=1;i<nums.size();i++){
   	        tempdiff=nums[i]-nums[i-1];
   	        diff=min(diff,tempdiff);
   	    }
   	    return diff;
   	    // Code here
   	}    

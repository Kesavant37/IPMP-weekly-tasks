void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size()-1,curr=0;
        if(high==0)
          return;
        while(mid<=high){
        if(nums[curr]==1){
            
            mid++;
            //continue;
        }
        else if(nums[curr]==0){
              swap(nums[low],nums[curr]);
              low++;
              mid++;
            
        }
        else {
            swap(nums[high],nums[curr]);
            high--;
            continue;


        }
        curr++;
    }
        
    }

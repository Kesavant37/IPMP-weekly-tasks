class Solution {
public:
    bool check(vector<int>& piles,int mid, int h){
        long long int h1=0;
        for(int i=0;i<piles.size();i++){
            if((piles[i]%mid)==0)
               h1=h1+(piles[i]/mid);
            else
              h1=h1+1+(piles[i]/mid);
          
        }
        if(h1>h) return false;
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int ans=INT_MAX,mid;
        int n=piles.size();
        int high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            mid=low+(high-low)/2;
            if(check(piles,mid,h)){
                
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};

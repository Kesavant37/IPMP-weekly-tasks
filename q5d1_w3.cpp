int maxprofit(vector<int>& prices) {
        int gain=0;
        int n=prices.size();
        if(n==1)
            return 0;
        for(int i=1;i<n;i++)
        { if(prices[i-1] < prices[i])
             gain+=( prices[i] - prices[i-1]);
        }
        return gain;

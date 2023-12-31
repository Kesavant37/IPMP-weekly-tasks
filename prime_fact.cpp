
class Solution{
	public:
	vector<int>AllPrimeFactors(int n) {
	    vector<int>ans;
	    if(n%2==0){
	        ans.push_back(2);
	            while(n%2==0){
	                n/=2;
	            }
	    }
	    for(int i=3;i<=n;i=i+2){
	       if(n%i==0){
	            ans.push_back(i);
	            while(n%i==0){
	                n/=i;
	            }
	       }
	}
	return ans;
	}
};


class Solution
{
public:
    
    vector<int> sieveOfEratosthenes(int n)
    {
        bool prime[n+1];
        for(int i=0;i<n+1;i++){
            prime[i]=true;
        }
        vector<int>ans;
        prime[0]=false;
        prime[1]=false;
        for(int i=2;i*i<=n;i++){
            if(prime[i])
               
            
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
        for(int i=2;i<n+1;i++){
            if(prime[i]==true)
               ans.push_back(i);
        }
        return ans;
        
            
    }
};

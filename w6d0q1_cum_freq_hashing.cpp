class Solution{
    public:
    vector<int> countFreq(int a[], int n) 
    { 
        sort(a,a+n);
        vector<int>ans;
        ans.push_back(1);
        int cnt=1;
        int temp;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){
                temp=ans[ans.size()-1];
                ans.pop_back();
                temp++;
                ans.push_back(temp);
            }
            else {
                temp=ans[ans.size()-1];
                
                ans.push_back(++temp);
            }
            
            
        }
        return ans;
        // Complete the function
    } 

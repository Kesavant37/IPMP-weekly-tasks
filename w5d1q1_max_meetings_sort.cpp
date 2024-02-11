class Solution{
public:
    static bool cmp(pair<int, pair<int,int>> arr1, pair<int,pair<int,int>> arr2){
        return arr1.second.second < arr2.second.second;
    } 

  vector<int> maxMeetings(int n,vector<int> &S,vector<int> &F){
        vector<pair<int,pair<int,int>>> temp;
        
        for(int i=0; i<n; i++){
            temp.push_back({i+1, {S[i], F[i]}});
        }
        
        sort(temp.begin(), temp.end(), cmp);
        
        vector<int> ans;
        ans.push_back(temp[0].first);
        int starttime = temp[0].second.second;
        
        for(int i=1; i<n; i++){
            if(temp[i].second.first > starttime){
                ans.push_back(temp[i].first);
                starttime = temp[i].second.second;
            }
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};


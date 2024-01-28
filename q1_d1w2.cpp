class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        long long int ans=0;
        for(long long int i=0;i<N;i++){
            ans=ans^Arr[i];
        }
        long long int ans1=~(ans)+1;
         ans1=ans&ans1;
        long long int vec1=0;
        long long int vec2=0;
        for(long long int i=0;i<N;i++){
            if(Arr[i]&ans1)
              vec1=vec1^Arr[i];
            else
              vec2=vec2^Arr[i];
              
        }
        vector<long long int>answer;
        if(vec1>vec2){
            answer.push_back(vec1);
            answer.push_back(vec2);
            
        }
        else{
            answer.push_back(vec2);
            answer.push_back(vec1);            
        }
        return answer;
        // code here
    }
};

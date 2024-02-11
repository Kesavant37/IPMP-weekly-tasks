class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        int n1=a.size();
        int n2=b.size();
        if(n1 != n2)return 0;
        map<char,int>mp1;
        map<char,int>mp2;
        
        for(int i=0;i<n1;i++){
            mp1[a[i]]++;
        }
        for(int i=0;i<n2;i++){
            mp2[b[i]]++;
        }
        if(mp1==mp2)return 1;
        else return 0;
        
        
       
        
    }

};

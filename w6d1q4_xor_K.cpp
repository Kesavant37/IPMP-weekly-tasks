#include<bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    map<int,int>mp;
    int n=a.size();
    int temp=0,cnt=0,temp1;
    for(int i=0;i<n;i++){
        temp=temp^a[i];
        if(temp==b){
            cnt++;
            //mp[temp]++;
        }
       
            temp1=temp^b;
            //mp.find(temp1)!=mp.end()
            cnt+=mp[temp1];
            mp[temp]++;           
        

    }
    return cnt;
    
   
}

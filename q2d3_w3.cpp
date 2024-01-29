int maxOccured(int L[], int R[], int n, int maxx){
        int i,j,cnt,ele = -1;
        int max1 = INT_MIN;
        for(i=0;i<=maxx;i++){
            cnt = 0;
            for(j=0;j<n;j++){
                if(i >= L[j] && i <= R[j])
                    cnt++;
            }
            if(cnt > max1){
                max1 = cnt;
                ele = i; 
            }
        }
        return ele;
    }};

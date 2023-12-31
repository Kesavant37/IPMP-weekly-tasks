  public:
    void print_divisors(int n) {
        int arr[n/2+1];
        int j=0;
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                arr[j++]=i;
            }
        }
        
        for(int k=0;k<j;k++){
            cout<<arr[k]<<" ";
        }
        cout<<n;
    }
};

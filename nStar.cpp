void nStarTriangle(int n) {
    for(int i=n;i>0;i--){
        for(int k=n-i;k>0;k--){
            cout<<" ";
        }
        for(int j=(2*i-1);j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

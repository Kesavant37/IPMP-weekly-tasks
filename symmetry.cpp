void symmetry(int n) {
    	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
        for(int k=0;k<n-i;k++){
            cout<<"  ";
        }
        for(int k=0;k<n-i;k++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
			cout<<"* ";
		}
        cout<<endl;	
	    }
        for(int i=n-1;i>=1;i--){
            for(int j=1;j<=i;j++){
			cout<<"* ";
		}
        for(int k=0;k<n-i;k++){
            cout<<"  ";
        }
        for(int k=0;k<n-i;k++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
			cout<<"* ";
		}
        cout<<endl;	

        }
    
}

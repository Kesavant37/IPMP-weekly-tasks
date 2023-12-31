int digits(int n){
	int k=0;
	while(n!=0){
		n=n/10;
		k++;
	}
	return k;
}

int power(int n,int k){
	int n1=1;
	for(int i=0;i<k;i++){
		n1=n1*n;
	}
	return n1;
}

bool checkArmstrong(int n){
	int dig=digits(n);
	int n1=n;
	int k=0;
	int m;
	while(n1!=0){
		m=n1%10;
		n1=n1/10;
		k+=power(m,dig);	
	}
	if(k==n)
	   return 1;
	else 
	   return 0;
	
}

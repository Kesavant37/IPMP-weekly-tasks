#include<iostream>
using namespace std;

int main() {
	int n;
	int k=0;
	cin>>n;
	int n1=n;
	int r=n%10;
	while(r==0&&n1!=0){
		n1=n1/10;
		r=n1%10;
		
	}
	while(n1 != 0) {
		
		k=k*10+(n1%10);
		n1=n1/10;
		
	}
	cout<<k;

	
	
}


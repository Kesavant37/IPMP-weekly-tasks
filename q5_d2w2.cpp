class Solution{
	public:
	int bitsum(long long int num){
	    if(num==0)
	      return 0;
	    return (num%10+bitsum(num/10));
	}
	
	int SumofDigits(int A, int B)
	{
        long long int num=pow(A,B);
        int a=bitsum(num);
        while(a/10 !=0){
            a=bitsum(a);
        }
        return a;
	}
};


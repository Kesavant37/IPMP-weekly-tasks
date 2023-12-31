int gcd(int a,int b)
{
	int gcd1;
	if(a != 0){
		return gcd(b-(b/a)*a,a);
		//return gcd1;	
	}
	return b;
}
int lcm(int a ,int b)
{
        int lcm1=(a*b)/gcd(a,b);
        return lcm1;
}

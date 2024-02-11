class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int temp=0,i=1,n2;
		    int n1=n;
		    while(n1!=0){
		        n2=n1%10;
		        n1=n1/10;
		        temp=temp*10+n2;
		        //i*=10;
		    }
		    if(temp==n) return "Yes";
		    else return "No";
		    
		}
};

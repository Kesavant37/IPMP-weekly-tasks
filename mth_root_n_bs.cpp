 int power(long long int x,int n,int m){
  long long ans=1;
  for(int i=0;i<n;i++){
    ans*=x;
    if(ans>m)
       return 0;
}
if(ans==m)
  return 1;
return 2;
 }


int NthRoot( int m, int n) {
  int low=1;
  int high=n;
  long long int mid;
  long long int val;
  while(low<=high){
    mid=(low+high)/2;
    val=power(mid,m,n);
    if(val==1)
      return mid;
    else if(val==2)
      low=mid+1;
    else 
      high=mid-1;

  }
  //mid=(low+high)/2;;
  return -1;

}

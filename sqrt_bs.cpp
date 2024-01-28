int floorSqrt(int n)
{
    int low=1;
    int high=n;
    long long mid;
    long long int val;
    while(low<=high){
        mid=(low+high)/2;
        val=(mid*mid);
        if(val==n)
          return mid;
        else if(val<=n)
          low=mid+1;
        else 
          high=mid-1;

    }
    mid=(low+high)/2;
    //return high;
    return mid;
    // Write your code here.
}

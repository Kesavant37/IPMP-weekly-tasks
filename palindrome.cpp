bool palindrome(int n)
{
      int k=0;
      int n2;
      int n1=n;
      while(n1!=0){
          n2=n1%10;
          n1=n1/10;
          k=k*10+n2;
      }
      if(k==n)
         return 1;
      else 
         return 0;
}

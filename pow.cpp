double myPow(double x, int n) {
   

    if(n>=0){
       if(n==0)
         return 1;
        else 
          return (x*myPow(x,n-1));
    }
    else {
        n=-n;
        double val=myPow(x,n);
        return (1.0/val);
        
    }    
}

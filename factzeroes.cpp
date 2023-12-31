int i=5;
int trailingZeroes(int n) {
    
    if(n/i<1){
    i=5;
    return 0;
    }
    else {
        int h=i;
        i=i*5;
        return ((n/h)+(trailingZeroes(n)));
    }    
}

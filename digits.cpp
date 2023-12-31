int countDigits(int n){
	
	    int d=0;
        while (n != 0) {
          n = n / 10;
		  d++;
        }
		return d;
}

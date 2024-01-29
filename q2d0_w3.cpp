int print2largest(int arr[], int n) {
	    int max1=arr[0];
	    int max2=INT_MIN;
	    int flag=0;
	    for(int i=1;i<n;i++){
	        if(arr[i]>max1){
	            max2=max1;
	            max1=arr[i];
	            flag=1;
	        }
	        else {
	            if(arr[i]>max2&&arr[i]!=max1){
	                max2=arr[i];
	                flag=1;
	            }
	        }
	    }
	    if(flag)
	      return max2;
	    else 
	      return -1;
	}

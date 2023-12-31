    int isPrime(int N){
        if(N==2){
            return 1;
        }
        else if(N==0||N==1)
          return 0;
        else{
            for(int i=2;i<=N/2;i++){
                if(N%i==0){
                    return 0;
                }
            }
            return 1;
           
        }
    }

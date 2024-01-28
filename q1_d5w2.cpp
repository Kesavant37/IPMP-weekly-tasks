 long long toh(int N, int from, int to, int aux) {
        // Your code here
        int c=1;
        if(N==1){
            cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
return 1;
}
 
// rec case
c+=toh(N-1,from,aux,to);
cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
c+=toh(N-1,aux,to,from);
return c;
    }

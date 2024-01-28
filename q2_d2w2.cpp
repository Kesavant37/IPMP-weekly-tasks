class Solution
{
public:
    int i=1;
    void printTillN(int N)
    {
         if(N>0)
        {
            cout<<i<<" ";
            i++;
            printTillN(--N);
        }// Write Your Code here
    }
};

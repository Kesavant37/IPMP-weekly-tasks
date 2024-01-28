#include<bits/stdc++.h>
int findKRotation(vector<int> &arr){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int min=-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[low]<=arr[mid]){
            if(min==-1) min=low;
            else if(arr[min]>arr[low])
              min=low;
            low=mid+1;
        }
        else{
            if (min==-1) min=mid;
            else if(arr[min]>arr[mid])
               min=mid;
            high=mid-1;
        }
        
    }
    return min;

}

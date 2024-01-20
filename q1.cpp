int singleNumber(int* nums, int numsSize) {
    int j=0;
    for(int i=0;i<numsSize;i++){
        j^=nums[i];
    }
    return j;

    
}

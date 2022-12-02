class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        //int t[size];
        int i,j=0;
        for(i=0; i<size-1; i++) {
            if(nums[i] < nums[i+1]) {
                nums[j++] = nums[i];
            }
        }
        nums[j++] = nums[size-1];
        
        return j;
    }
};
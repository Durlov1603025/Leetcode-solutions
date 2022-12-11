class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int i,j;
        for(i=0;i<n;i++)
        {
            if(nums[i] >= target)
                return i;
        }
        return n;
    }
};
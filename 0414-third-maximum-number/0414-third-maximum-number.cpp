class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int m = nums[n-1];
        nums.erase(unique(nums.begin(),nums.end()),nums.end());  //reverse all duplicates
        int x = nums.size();
        if(x>=3)
        return nums[x-3];
        else return m;
    }
};
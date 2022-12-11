class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        int i;
        for(i=0; i<n; i=i+2)
        {
            if(nums[i] != nums[i+1]){
                return nums[i];
            }
        }
        return 0;
    }
};
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int all = (n+1)*n/2;
        int sum = accumulate(nums.begin(), nums.end(),0);
        int miss = all-sum;
        return miss;
    }
};
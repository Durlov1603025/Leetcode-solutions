class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = nums[(n-1)/2];   //because The majority element is the element that appears more than ⌊n / 2⌋ times. So in the sorted array the majority element starts from (n-1)/2 position.
        return ans;
    }
};
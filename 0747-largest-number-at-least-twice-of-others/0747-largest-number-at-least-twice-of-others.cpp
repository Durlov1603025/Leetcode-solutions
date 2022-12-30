class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            ans.push_back(nums[i]);
        }
        sort(ans.begin(),ans.end());
        int max1 = ans[n-1];
        int max2 = ans[n-2];
        
        if(max1<2*max2)
        {
            return -1;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(nums[i]==max1)
                {
                    return i;
                }
            }
        }
        return 0;
    }
};
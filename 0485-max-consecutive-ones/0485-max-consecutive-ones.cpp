class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i,ans=0,c=0;
        int n = nums.size();
        for(i=0; i<n ; i++)
        {
            if(nums[i] == 1)
            {
                c++;
                if(c>ans)
                {
                    ans=c;
                }
            }
            else
            {
                c=0;
            }
        }
        return ans;
    }
};
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool one = false;
        int i, j;
        int n = nums.size();

        for(int x : nums)
        {
            if(x == 1)
            {
                one = true;
                break;
            }
        }
        if(one == false)
        { return 1;}

        if(n==1) return 2;

        for(i=0; i<n; i++)
        {
            if(nums[i]<=0 || nums[i]>n)
            {
                nums[i] =1;
            }
        }

        for(i=0; i<n; i++)
        {
            j = abs(nums[i]);
            if(nums[j-1] > 0 )
            {
                nums[j-1] = nums[j-1] * -1;
            }
        }

        for(i=0; i<n; i++)
        {
            if(nums[i] > 0)
            return i+1;
        }

        return n+1;
    }
};
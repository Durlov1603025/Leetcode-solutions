class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0, h=n-1, result=-1;
        
        while(l<=h)
        {
            int mid = l+ (h-l)/2;
            if(nums[mid]>target)
            {
                h = mid-1;
            }
            else if(nums[mid]<target)
            {
                l = mid+1;
            }
            else
            {
                result = mid;
                h = mid-1;
            }
            
        }
        return result;
    
    }
};
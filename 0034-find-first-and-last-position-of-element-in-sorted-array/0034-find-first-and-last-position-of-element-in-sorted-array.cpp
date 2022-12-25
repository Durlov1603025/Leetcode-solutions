class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2);
        int n = nums.size();
        int frst, lst;
        frst = first(nums, target, n);
        lst = last(nums, target, n);
        bool exists = find(nums.begin(),nums.end(), target) != nums.end();
        if(exists)
        {
            ans = {frst,lst};
        }
        else
        {
            ans = {-1,-1};
        }
        
        return ans;
    }

    int first(vector<int>& num, int x, int n)
    {
        int l=0, h=n-1, result=-1;
        while(l<=h)
        {
            int mid = l+ (h-l)/2;
            if(num[mid]>x)
            {
                h = mid-1;
            }
            else if(num[mid]<x)
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

    
    int last(vector<int>& num, int x, int n)
    {
        int l=0, h=n-1, result=-1;
        while(l<=h)
        {
            int mid = l+ (h-l)/2;
            if(num[mid]>x)
            {
                h = mid-1;
            }
            else if(num[mid]<x)
            {
                l = mid+1;
            }
            else
            {
                result = mid;
                l = mid+1;
            }
            
        }
        return result;
    }


};
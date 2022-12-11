class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int m1 = m-1;
        int m2 = n-1;
        int num = m+n-1;
        while(m2>=0)
        {
            if(m1>=0 && nums1[m1]>nums2[m2])
            {
                nums1[num--] = nums1[m1--];
            }
            else
            {
                nums1[num--] = nums2[m2--];
            }
        }
    }
};
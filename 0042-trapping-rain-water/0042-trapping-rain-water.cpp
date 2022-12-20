class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0, maxLeft = 0, maxRight =0;
        int i=0;
        int j = height.size() - 1;

        while(i<j)
        {
            if(height[i] <= height[j] )
            {
                maxLeft = max(maxLeft, height[i] );
                water = water + maxLeft - height[i];
                i++;
            }
            else
            {
                maxRight = max(maxRight, height[j] );
                water = water + maxRight - height[j];
                j--;
            }
        }
        return water;
    }
};
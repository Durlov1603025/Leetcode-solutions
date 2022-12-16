class Solution {
public:
    int maxArea(vector<int>& height) {
        int water;
        int Max_water=0; 
        int i = 0, j=height.size()-1;
        
        while(i<j)
        {
            water = min(height[i], height[j]) * (j-i);
            Max_water = max(Max_water, water);
            
            if(height[i] > height[j])
            {
                j--;
            }
            else {
                i++;
            }
        }
        return Max_water;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if (nums[i] + nums[j] == target){
                    //result[0] = i;
                    //result[1] = j;
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};

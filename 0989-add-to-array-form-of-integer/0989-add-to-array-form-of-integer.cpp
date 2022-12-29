class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        int n = num.size();
        int i = n-1;
        int sum = 0, carry=0;
        while(carry||k||i>=0)
        {
            sum = carry;
            if(k!=0)
            {
                sum += k%10;
                k = k/10; 
            }
            if(i>=0)
            {
                sum = sum+ num[i];
                i--;
            }
            carry = sum/10;
            sum = sum%10;
            ans.push_back(sum);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
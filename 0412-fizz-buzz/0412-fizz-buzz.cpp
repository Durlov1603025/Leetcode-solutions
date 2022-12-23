class Solution {
public:
    vector<string> fizzBuzz(int n) {
        string str1, str2, str3;
        str1 = "Fizz";
        str2 = "Buzz";
        str3 = "FizzBuzz";
        vector<string> ans;
        for(int i=1; i<=n; i++)
        {
            if(i%15==0)
            {
                ans.push_back(str3);
            }
            else if(i%3==0)
            {
                ans.push_back(str1);
            }
            else if(i%5==0)
            {
                ans.push_back(str2);
            }
            else
            {
                ans.push_back(to_string(i));
            }
        }
        return ans;
    }
};
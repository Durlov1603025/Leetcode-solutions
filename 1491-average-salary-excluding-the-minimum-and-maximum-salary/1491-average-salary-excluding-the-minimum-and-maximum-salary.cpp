class Solution {
public:
    double average(vector<int>& salary) {
        vector<int>::iterator max;
        max = max_element(salary.begin(), salary.end());
        salary.erase(max);
        
        vector<int>::iterator min;
        min = min_element(salary.begin(), salary.end());
        salary.erase(min);
        
       double avg = accumulate(salary.begin(), salary.end(), 0.0)/ salary.size();
        
        return avg;
    }
};
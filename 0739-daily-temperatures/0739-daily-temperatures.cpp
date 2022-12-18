class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> days(n,0);
        stack<int> st;

        // Traverse all the temperatures
        for (int i = 0; i < n; i++)
        {
            // Check if current index is the next warmer temperature of any previous indexes
            while(!st.empty() && temperatures[i] > temperatures[st.top()] )
            {
                days[st.top()] = i - st.top();

                // Pop the element
                st.pop();
            }
            // Push the current index
            st.push(i);
        }
        return days; 

    }
};
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector <int> occurances;
        int size = arr.size();
        sort(arr.begin(), arr.end());
        int i =0;
        while (i< size)
        {
            int cnt = 1;
            for(int j=i+1; j<size; j++)
            {
                if(arr[i] == arr[j])
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            occurances.push_back(cnt);
            i = i+cnt;
        }
        
        sort(occurances.begin(),occurances.end());
        for(int i=0; i<occurances.size()-1; i++)
        {
            if (occurances[i] == occurances[i+1])
            {
                return false;
            }
            
        }
        return true;
        
    }
};
class Solution {
public:
    bool canWinNim(int n) {
        if(n%4 == 0)
        {
            return false;  
        }

        return true;  // because if(n=5) I can remove 1, then 4 remains, he removes 1,2 or 3 & I win. if(n=6) I can remove 2, then 4 remains, he removes 1,2 or 3 & I win. if(n=7) I can remove 3, then 4 remains, he removes 1,2 or 3 & I win. 

    }
};
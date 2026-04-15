class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int cnt = 0;
        
        int maxi = 0;

        
        for (int i = 0; i < nums.size(); i++) {
            // if element is 1, cnt++
            if (nums[i] == 1) {
                cnt++;
            } else {
                // if element is 0, reset count
                cnt = 0;
            }

            // Update maximum if current count is greater
            maxi = max(maxi, cnt);
        }

        // Return maximum consecutive 1's
        return maxi;
    }
        
    
};
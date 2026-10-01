class Solution {
public:
    // author: isocyanide13
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx = 0;
        int count = 0;
        for(int i=0; i < nums.size(); ++i) {
            if(nums[i] == 1) {
                count += 1;
                mx = max(mx,count);
            }
            // reset count
            else {
                count = 0;
            }
        }
        return mx;
    }
};
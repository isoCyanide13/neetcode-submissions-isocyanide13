class Solution {
public:
    // author: isocyanide13
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0; i < nums.size(); ++i) {
            int find = target-nums[i];
            if(mp.find(find) != NULL) {
                return {mp[find], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};

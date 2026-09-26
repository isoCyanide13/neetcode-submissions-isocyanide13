class Solution {
public:

    // author: isocyanide13

    bool hasDuplicate(vector<int>& nums) {
        bool hasDup = false;

        unordered_map<int,int> mp; // [key: num, val: freq];
        for(int num : nums) {
            mp[num]++;
        }

        for(auto& [key, val] : mp) {
            if(mp[key] > 1) {
                return true;
            }
        }
        return false;
    }
};
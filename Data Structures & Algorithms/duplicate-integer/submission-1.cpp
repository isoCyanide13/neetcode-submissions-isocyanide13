class Solution {
public:

    // author: isocyanide13

    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for(int num : nums) {
            if(st.find(num) != st.end()) {
                return true;
            }
            st.insert(num);
        }
        return false;
    }
};
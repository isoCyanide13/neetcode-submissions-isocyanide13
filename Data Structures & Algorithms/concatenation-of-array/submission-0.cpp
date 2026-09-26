class Solution {
public:

    // author: isocyanide13
    
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result(nums.begin(), nums.end());
        for(int& num : nums) {
            result.push_back(num);
        }
        return result;
    }
};
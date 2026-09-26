class Solution {
public:

    // author: isocyanide13
    
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;
        result.reserve(2*nums.size());

        result.insert(result.end(), nums.begin(), nums.end());
        result.insert(result.end(), nums.begin(), nums.end());

        return result;
    }
};
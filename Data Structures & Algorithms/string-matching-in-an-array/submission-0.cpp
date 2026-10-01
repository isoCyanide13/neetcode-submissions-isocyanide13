class Solution {
public:
    // author: isocyanide13
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;

        for(const auto& word : words) {
            for(const auto& s : words) {
                if(s != word && s.find(word) != string::npos) {
                    result.push_back(word);
                    break;
                }
            }
        }
        return result;
    }
};
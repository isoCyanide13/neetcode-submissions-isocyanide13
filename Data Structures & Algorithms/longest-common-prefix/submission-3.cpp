class Solution {
public:
    // author: isocyanide13
    string longestCommonPrefix(vector<string>& strs) {
        string pref = "";

        for(int i=0; i < strs[0].length(); ++i) {

            for(const string& s : strs) {
                if(i >= s.length() || s[i] != strs[0][i]) {
                    return pref;
                }
            }
            pref += strs[0][i];
        }
        return pref;
    }
};
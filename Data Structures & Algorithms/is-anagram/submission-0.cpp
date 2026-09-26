class Solution {
public:

    // author: isocyanide13
    
    bool isAnagram(string s, string t) {
        
        // unequal len: never be anagram
        if(s.length() != t.length()) {
            return false;
        }

        int n = s.length();

        unordered_map<char,int> mp; // [key: s[i], val: freq];

        for(int i=0; i < n; ++i) {
            mp[s[i]]++;
            mp[t[i]]--;
        }

        for(auto& [key,val] : mp) {
            if(mp[key] != 0) {
                return false;
            }
        }
        return true;
    }
};

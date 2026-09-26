class Solution {
public:
    //author: isocyanide13
    bool isSubsequence(string s, string t) {
        int n = s.length();
        int m = t.length();

        int i = 0; // ptr to s str
        int j = 0; // ptr to t str
        while(i < n && j < m) {
            if(s[i] == t[j]) {
                i++;
            }
            j++;
        }
        if(i == n) {
            return true;
        }
        return false;
    }
};
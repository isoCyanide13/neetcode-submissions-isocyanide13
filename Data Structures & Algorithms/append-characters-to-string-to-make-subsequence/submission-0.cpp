class Solution {
public:
    // author: isocyanide13
    int appendCharacters(string s, string t) {
        int n = s.size();
        int m = t.length();

        int i = 0; // ptr to s string
        int j = 0; // ptr to t string

        while (i < n && j < m) {
            if(t[j] == s[i]) {
                j++;
            }
            i++;
        }
        return t.length()-j;
    }
};
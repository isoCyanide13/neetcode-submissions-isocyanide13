class Solution {
public:
    // author: isocyanide13
    int scoreOfString(string s) {
        int score = 0;

        for(int i=1; i < s.length(); ++i) {
            int prev = s[i-1];
            int curr = s[i];
            score += abs(curr-prev);
        }
        return score;
    }
};
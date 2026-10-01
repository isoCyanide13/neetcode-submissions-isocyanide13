class Solution {
public:
    // author: isocyanide13
    int lengthOfLastWord(string s) {
        string k = "";
        int i = s.size();
        while(i--) {
            if(s[i] != ' ') {
                k += s[i];
            }
            else {
                if(k != "") {
                    break;
                }
                else continue;
            }
        }
        return k.size();
    }
};
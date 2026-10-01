class Solution {
public:
    // author: isocyanide13
    int countSeniors(vector<string>& details) {
        int n = details.size();
        vector<int> ages;

        for(auto s : details) {
            string age = "";
            age += s[11];
            age += s[12];
            ages.push_back(stoi(age));
        }
        int count = 0;
        for(int age : ages) {
            if(age > 60) {
                count++;
            }
        }
        return count;
    }
};
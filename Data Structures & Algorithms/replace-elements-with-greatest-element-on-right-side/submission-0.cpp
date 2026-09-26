class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> result(n,-1);

        for(int i=1; i <= n-1; ++i) {
            auto start = arr.begin() + i;
            auto mx = max_element(start, arr.end());
            result[i-1] = *mx;
        }

        return result;
    }
};
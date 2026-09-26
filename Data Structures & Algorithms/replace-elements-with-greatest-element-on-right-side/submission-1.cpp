class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> result(n,-1);

        int mx = -1;

        for(int i=n-1; i >= 0; --i) {
            result[i] = mx;
            mx = max(mx,arr[i]);
        }

        return result;
    }
};
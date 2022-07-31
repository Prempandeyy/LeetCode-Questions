class Solution {
public:
    int maximumXOR(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        for(int i = 0; i<n; ++i){
            ans = ans | arr[i];
        }
        return ans;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        unordered_set<char> st;
        int i = 0;
        for (int j = 0; j < s.size(); j++) {
            while (st.find(s[j]) != st.end()) {
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            int count = st.size();
            ans = max(ans, count);
        }
        return ans;
        
    }
};
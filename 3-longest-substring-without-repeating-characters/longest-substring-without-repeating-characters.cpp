class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int left = 0;
        int maxLen = 0;

        unordered_set<char> st;

        for (int right = 0; right < s.length(); right++) {

            // duplicate found
            while (st.find(s[right]) != st.end()) {
                st.erase(s[left]);
                left++;
            }

            // add current character
            st.insert(s[right]);

            // calculate window length
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
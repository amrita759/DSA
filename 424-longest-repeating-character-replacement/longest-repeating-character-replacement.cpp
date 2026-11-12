class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char, int> mp;
        int left = 0;
        int maxFreq = 0;
        int maxLength = 0;
        for (int right = 0; right < s.length(); right++) {
            mp[s[right]]++;
            maxFreq = max(maxFreq, mp[s[right]]);
            int windowLength = right - left + 1;
            if (windowLength - maxFreq > k) {
                mp[s[left]]--;
                left++;
            }
            maxLength = max(maxLength, right - left + 1);
        }
        return maxLength;
    }
};
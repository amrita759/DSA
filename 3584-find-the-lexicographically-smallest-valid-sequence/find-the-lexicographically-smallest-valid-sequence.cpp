class Solution {
public:
    vector<int> validSequence(string word1, string word2) {

        int n = word1.size(), m = word2.size();

        vector<int> suf(n + 1, m);

        int j = m - 1;
        for (int i = n - 1; i >= 0; i--) {
            if (j >= 0 && word1[i] == word2[j])
                j--;
            suf[i] = j + 1;
        }

        vector<int> ans;
        bool used = false;

        int p = 0;

        for (int i = 0; i < m; i++) {
            while (p < n) {

                if (word1[p] == word2[i]) {
                    ans.push_back(p++);
                    break;
                }

                if (!used && suf[p + 1] <= i + 1) {
                    used = true;
                    ans.push_back(p++);
                    break;
                }

                p++;
            }

            if ((int)ans.size() != i + 1)
                return {};
        }

        return ans;
    }
};
 
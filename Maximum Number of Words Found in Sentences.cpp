class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for (int i = 0; i < sentences.size(); i++) {
            int count = 0;
            for (int j = 0; j < sentences[i].size(); j++) {
                if (sentences[i][j] == ' ')
                    count++;
            }
            if (count > ans) {
                ans = count;
            }
        }
        return ans + 1;
    }
};

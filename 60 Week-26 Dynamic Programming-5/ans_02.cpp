#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
using namespace std;

bool wordBreak(string s, vector<string>& wordDict) {
    unordered_set<string> dict(wordDict.begin(), wordDict.end());
    int n = s.size();
    vector<bool> dp(n+1, false);
    dp[0] = true;
    for(int i = 1; i <= n; ++i) {
        for(int j = 0; j < i; ++j) {
            if(dp[j] && dict.count(s.substr(j, i-j))) {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[n];
}

int main() {
    string s;
    int m;
    cin >> s >> m;
    vector<string> wordDict(m);
    for(int i = 0; i < m; ++i) cin >> wordDict[i];
    cout << (wordBreak(s, wordDict) ? "true" : "false") << endl;
    return 0;
}

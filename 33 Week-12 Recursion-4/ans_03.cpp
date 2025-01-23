#include <iostream>
#include <vector>
#include <string>
using namespace std;

int longestCommonSubstring(string s1, string s2) {
    int n = s1.length();
    int m = s2.length();
    int maxLength = 0;
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                maxLength = max(maxLength, dp[i][j]);
            } else {
                dp[i][j] = 0;
            }
        }
    }
    return maxLength;
}

int main() {
    string s1 = "abcde";
    string s2 = "abfce";
    cout << "String 1: " << s1 << endl;
    cout << "String 2: " << s2 << endl;
    int result = longestCommonSubstring(s1, s2);
    cout << "Length of the longest common substring: " << result << endl;
    return 0;
}

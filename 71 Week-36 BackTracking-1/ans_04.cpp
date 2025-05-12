#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

void generateCasePermutations(string &s, int index, string &current, vector<string> &result) {
    if (index == s.size()) {
        result.push_back(current);
        return;
    }
    if (isalpha(s[index])) {
        current.push_back(tolower(s[index]));
        generateCasePermutations(s, index + 1, current, result);
        current.pop_back();

        current.push_back(toupper(s[index]));
        generateCasePermutations(s, index + 1, current, result);
        current.pop_back();
    } else {
        current.push_back(s[index]);
        generateCasePermutations(s, index + 1, current, result);
        current.pop_back();
    }
}

vector<string> letterCasePermutation(string s) {
    vector<string> result;
    string current;
    generateCasePermutations(s, 0, current, result);
    return result;
}

int main() {
    string s;
    cin >> s;
    vector<string> result = letterCasePermutation(s);
    for (const string &str : result) {
        cout << str << endl;
    }
    return 0;
}

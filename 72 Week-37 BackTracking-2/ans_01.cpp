#include <iostream>
#include <vector>
#include <string>
using namespace std;

void backtrack(string digits, string current, int index, vector<string>& result, vector<string>& mapping) {
    if (index == digits.size()) {
        result.push_back(current);
        return;
    }
    string letters = mapping[digits[index] - '0'];
    for (char letter : letters) {
        backtrack(digits, current + letter, index + 1, result, mapping);
    }
}

vector<string> letterCombinations(string digits) {
    if (digits.empty()) return {};
    vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> result;
    backtrack(digits, "", 0, result, mapping);
    return result;
}

int main() {
    string digits = "23";
    vector<string> combinations = letterCombinations(digits);
    for (string combination : combinations) {
        cout << combination << " ";
    }
    return 0;
}

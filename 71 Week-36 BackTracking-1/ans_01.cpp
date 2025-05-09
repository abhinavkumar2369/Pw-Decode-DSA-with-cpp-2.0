#include <iostream>
#include <vector>
#include <string>
using namespace std;

void generatePalindromes(string &current, int n, int pos, vector<string> &result) {
    if (pos >= (n + 1) / 2) {
        result.push_back(current);
        return;
    }
    for (char c = '0'; c <= '9'; ++c) {
        current[pos] = c;
        current[n - pos - 1] = c;
        generatePalindromes(current, n, pos + 1, result);
    }
}

vector<string> generateAllPalindromes(int n) {
    vector<string> result;
    string current(n, '0');
    generatePalindromes(current, n, 0, result);
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<string> palindromes = generateAllPalindromes(n);
    for (const string &p : palindromes) {
        cout << p << endl;
    }
    return 0;
}

#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>
using namespace std;

string reorganizeString(string s) {
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;
    
    priority_queue<pair<int, char>> maxHeap;
    for (auto& [ch, count] : freq) maxHeap.push({count, ch});
    
    string result = "";
    pair<int, char> prev = {0, ' '};
    
    while (!maxHeap.empty()) {
        auto [count, ch] = maxHeap.top();
        maxHeap.pop();
        result += ch;
        if (prev.first > 0) maxHeap.push(prev);
        prev = {count - 1, ch};
    }
    
    return result.size() == s.size() ? result : "";
}

int main() {
    string s = "aab";
    cout << reorganizeString(s) << endl; // Output: "aba"
    return 0;
}

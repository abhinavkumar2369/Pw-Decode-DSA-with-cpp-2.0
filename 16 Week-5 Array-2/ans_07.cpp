#include <vector>
using namespace std;

bool isPalindrome(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) return false;
    }
    return true;
}

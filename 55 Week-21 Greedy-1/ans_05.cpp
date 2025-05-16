#include <iostream>
#include <vector>
#include <algorithm>
#include<limits.h>

using namespace std;

int minSumDifferentIndices(vector<int>& a, vector<int>& b) {
    int minA = INT_MAX, minB = INT_MAX, secondMinA = INT_MAX, secondMinB = INT_MAX;
    int minAIndex = -1, minBIndex = -1;

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] < minA) {
            secondMinA = minA;
            minA = a[i];
            minAIndex = i;
        } else if (a[i] < secondMinA) {
            secondMinA = a[i];
        }
        if (b[i] < minB) {
            secondMinB = minB;
            minB = b[i];
            minBIndex = i;
        } else if (b[i] < secondMinB) {
            secondMinB = b[i];
        }
    }

    if (minAIndex != minBIndex) return minA + minB;
    return min(minA + secondMinB, minB + secondMinA);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    cout << minSumDifferentIndices(a, b) << endl;
    return 0;
}

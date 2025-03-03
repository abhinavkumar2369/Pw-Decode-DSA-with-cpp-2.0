#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    stack<int> st;
    heights.push_back(0);
    int maxA = 0;
    for(int i = 0; i < heights.size(); ++i) {
        while(!st.empty() && heights[i] < heights[st.top()]) {
            int h = heights[st.top()]; st.pop();
            int w = st.empty() ? i : i - st.top() - 1;
            maxA = max(maxA, h * w);
        }
        st.push(i);
    }
    return maxA;
}

int maximalRectangle(vector<vector<char>>& matrix) {
    if(matrix.empty() || matrix[0].empty()) return 0;
    int m = matrix.size(), n = matrix[0].size();
    vector<int> heights(n, 0);
    int maxRect = 0;
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            if(matrix[i][j] == '1') heights[j]++;
            else heights[j] = 0;
        }
        maxRect = max(maxRect, largestRectangleArea(heights));
    }
    return maxRect;
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<char>> matrix(m, vector<char>(n));
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
            cin >> matrix[i][j];
    cout << maximalRectangle(matrix) << endl;
    return 0;
}

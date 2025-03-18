#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    auto dist = [](vector<int>& p) {
        return 1LL * p[0] * p[0] + 1LL * p[1] * p[1];
    };
    priority_queue<pair<long long, int>> pq;
    for(int i = 0; i < points.size(); ++i) {
        long long d = dist(points[i]);
        pq.push({d, i});
        if(pq.size() > k) pq.pop();
    }
    vector<vector<int>> res;
    while(!pq.empty()) {
        res.push_back(points[pq.top().second]);
        pq.pop();
    }
    return res;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> points(n, vector<int>(2));
    for(int i = 0; i < n; ++i) cin >> points[i][0] >> points[i][1];
    vector<vector<int>> ans = kClosest(points, k);
    for(auto& p : ans) cout << p[0] << " " << p[1] << endl;
    return 0;
}

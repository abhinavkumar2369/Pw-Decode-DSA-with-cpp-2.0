#include <vector>
using namespace std;

vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
    vector<vector<bool>> reachable(numCourses, vector<bool>(numCourses, false));

    for (auto& pre : prerequisites) {
        reachable[pre[0]][pre[1]] = true;
    }

    for (int k = 0; k < numCourses; ++k) {
        for (int i = 0; i < numCourses; ++i) {
            for (int j = 0; j < numCourses; ++j) {
                reachable[i][j] = reachable[i][j] || (reachable[i][k] && reachable[k][j]);
            }
        }
    }

    vector<bool> result;
    for (auto& query : queries) {
        result.push_back(reachable[query[0]][query[1]]);
    }

    return result;
}
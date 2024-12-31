#include <vector>
using namespace std;

void modifyArray(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (i % 2 == 0) {
            arr[i] += 10;
        } else {
            arr[i] *= 2;
        }
    }
}

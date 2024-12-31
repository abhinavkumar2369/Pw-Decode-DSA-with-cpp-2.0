#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {6,8,2,1,3,8,5,3,7,7,1,6};
    int unique = 0;
    for (int num : arr) {
        unique ^= num;
    }
    cout << unique << endl;
    return 0;
}
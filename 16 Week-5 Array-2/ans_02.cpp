#include <vector>
#include <iostream>
#include <limits.h>
using namespace std;

void largestThree(const vector<int>& arr, int& first, int& second, int& third) {
    first = second = third = INT_MIN;
    for (int num : arr) {
        if (num > first) {
            third = second;
            second = first;
            first = num;
        } else if (num > second && num < first) {
            third = second;
            second = num;
        } else if (num > third && num < second) {
            third = num;
        }
    }
}

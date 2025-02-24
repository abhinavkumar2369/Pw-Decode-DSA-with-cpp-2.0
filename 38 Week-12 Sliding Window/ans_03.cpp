#include <vector>
using namespace std;

int numberOfSubarrays(vector<int>& nums, int k) {
    int n = nums.size();
    int res = 0, odd = 0, left = 0, cnt = 0;
    for(int right = 0; right < n; ++right) {
        if(nums[right] % 2) {
            ++odd;
            cnt = 0;
        }
        while(odd == k) {
            ++cnt;
            if(nums[left++] % 2) --odd;
        }
        res += cnt;
    }
    return res;
}

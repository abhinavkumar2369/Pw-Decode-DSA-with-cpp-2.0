#include<iostream>
#include<math.h>
using namespace std;

class Solution {
    public:
        int numberOfSteps(int num) {
            if (num==0) return 0;
            if (num%2==0) num=ceil(num/2);
            else num=num-1;
            return 1+numberOfSteps(num);
        }
    };
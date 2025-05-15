#include <iostream>
#include <algorithm>
using namespace std;

int maximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
    int sum = 0;
    if (k <= numOnes) return k;
    sum += numOnes;
    k -= numOnes;
    if (k <= numZeros) return sum;
    k -= numZeros;
    return sum - k;
}

int main() {
    int numOnes, numZeros, numNegOnes, k;
    cin >> numOnes >> numZeros >> numNegOnes >> k;
    cout << maximumSum(numOnes, numZeros, numNegOnes, k) << endl;
    return 0;
}

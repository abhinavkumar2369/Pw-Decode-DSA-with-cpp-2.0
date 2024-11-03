#include <iostream>
#include <vector>

bool isAlmostSorted(const std::vector<int>& arr) {
    int n = arr.size();
    int misplacedCount = 0;

    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            misplacedCount++;
            if (i + 2 < n && arr[i] > arr[i + 2]) {
                misplacedCount++;
            }
        }
    }
    
    return misplacedCount <= 2;
}

int main() {
    std::vector<int> arr = {1, 3, 2, 5, 4, 6};
    
    if (isAlmostSorted(arr)) {
        std::cout << "The array is almost sorted." << std::endl;
    } else {
        std::cout << "The array is not almost sorted." << std::endl;
    }

    return 0;
}
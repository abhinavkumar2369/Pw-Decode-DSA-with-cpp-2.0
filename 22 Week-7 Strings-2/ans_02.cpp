#include <iostream>
#include <string>

char findSecondLargestDigit(const std::string& str) {
    char largest = '0';
    char secondLargest = '0';

    for (char ch : str) {
        if (isdigit(ch)) {
            if (ch > largest) {
                secondLargest = largest;
                largest = ch;
            } else if (ch > secondLargest && ch != largest) {
                secondLargest = ch;
            }
        }
    }

    return (secondLargest == '0') ? '-' : secondLargest;
}


int main() {
    std::string str1 = "2947578";
    std::cout << "Second largest digit in \"" << str1 << "\" is: " << findSecondLargestDigit(str1) << std::endl;

    std::string str2 = "1241";
    std::cout << "Second largest digit in \"" << str2 << "\" is: " << findSecondLargestDigit(str2) << std::endl;

    return 0;
}
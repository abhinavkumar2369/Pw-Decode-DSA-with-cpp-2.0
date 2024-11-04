#include <iostream>
#include <string>

bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    std::string str1 = "abcde";
    std::cout << "Input = " << str1 << std::endl << "Output = " << (isPalindrome(str1) ? "Yes" : "No") << std::endl;

    std::string str2 = "abcdcba";
    std::cout << "Input = " << str2 << std::endl << "Output = " << (isPalindrome(str2) ? "Yes" : "No") << std::endl;

    return 0;
}
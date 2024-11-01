#include <iostream>
#include <string>

int countVowelSubstrings(const std::string& str) {
    int count = 0;
    int vowelCount = 0;

    for (char ch : str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCount++;
        } else {
            if (vowelCount > 0) {
                count += (vowelCount * (vowelCount + 1)) / 2;
                vowelCount = 0;
            }
        }
    }

    if (vowelCount > 0) {
        count += (vowelCount * (vowelCount + 1)) / 2;
    }

    return count;
}


int main() {
    std::string str1 = "abjkoe";
    std::cout << "Number of vowel substrings in \"" << str1 << "\": " << countVowelSubstrings(str1) << std::endl;

    std::string str2 = "hgdhpw";
    std::cout << "Number of vowel substrings in \"" << str2 << "\": " << countVowelSubstrings(str2) << std::endl;

    return 0;
}
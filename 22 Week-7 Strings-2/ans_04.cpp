#include<iostream>
#include<vector>
#include<string>

bool anagram(){
    std::string str_1, str_2;
    std::cout << "Enter string 1 = ";
    std::getline(std::cin, str_1);
    std::cout << "Enter string 2 = ";
    std::getline(std::cin, str_2);

    if (str_1.size() != str_2.size()) return false;
    for (int i=0; i<str_1.size(); i++) {
        if (str_1[i] != str_2[str_1.size()-1-i]) return false;
    }
    return true;
}

int main(){
    (anagram())? std::cout << "Anagram" : std::cout << "Not Anagram";
}
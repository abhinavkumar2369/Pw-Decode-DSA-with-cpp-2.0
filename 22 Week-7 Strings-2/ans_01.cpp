#include<iostream>
#include<string>

int main(){
    std::string str, temp="";
    std::cout << "Enter your Strings = ";
    std::getline(std::cin,str);

    for(int i=0; i<str.size()-1; i++){
        temp = str[i] + temp;
    }

    str+=temp;
    std::cout << str;
    return 0;
}
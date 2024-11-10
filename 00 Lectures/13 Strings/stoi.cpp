#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>


int main(){
    std:: string str1 = "12345";
    std:: string str2 = "12345";
    
    int x = stoi(str1);
    int y = stoi(str2);

    std:: cout << x+y;
}
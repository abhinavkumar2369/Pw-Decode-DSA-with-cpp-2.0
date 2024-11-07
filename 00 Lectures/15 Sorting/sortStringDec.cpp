#include<iostream>
#include<string>
#include<algorithm>

int main(){
    std::string s="AZYZXBDXJK";
    std::string str;

    for(int i=0; i<s.size(); i++){
        if(s[i]>='X') str.push_back(s[i]);
    }
    std::sort(str.begin(),str.end());
    std::cout<<str;

    return 0;
}

// ANSWER ---
// XXYZZ
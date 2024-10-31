#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

int main(){
    std::string str,temp;

    std::cout<<"Enter a String = ";
    std::getline(std::cin,str);
    
    std::stringstream ss(str);
    std::vector<std::string> v;
    while(ss >> temp) v.push_back(temp);
    
    std::sort(v.begin(),v.end());
    std::cout << v[v.size()-1] << std::endl;
}
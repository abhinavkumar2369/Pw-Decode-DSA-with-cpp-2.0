#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

int main(){
    string s = "Raghav is a maths teacher";
    
    stringstream ss(s);

    string temp;
    
    while(ss >> temp){
        cout << temp << endl;
    }
    return 0;
}
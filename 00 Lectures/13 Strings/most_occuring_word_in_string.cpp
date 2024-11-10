#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    string str = "Raghav is a math teacher. He teaches math";
    stringstream ss(str);
    string temp;
    vector <string> v;
    while (ss >> temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());

    int count=1, max_count=0;
    temp = v[0];
    for(int i=1; i<v.size(); i++){
        if (v[i]==v[i-1]){
            count++;
        }
        else{
            count=1;
        }
        if (count > max_count){
            max_count = count;
            temp=v[i];
        }
    }

    cout << temp << " = " << max_count;

    return 0;
}

// OUTPUT ----
// math = 2
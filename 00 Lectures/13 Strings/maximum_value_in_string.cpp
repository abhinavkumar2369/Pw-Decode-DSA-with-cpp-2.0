#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    stringstream ss(str);

    vector<int> v;
    string temp;

    while(ss >> temp){
        v.push_back(stoi(temp));
    }

    int max = v[0];
    for(int i=1; i<v.size(); i++){
        if (max < v[i]) max=v[i];
    }

    cout << max << endl;
}
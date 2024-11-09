#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

int main(){
    string str = "flower flow flowing";
    stringstream ss(str);
    vector<string> v;
    string temp;
    while(ss >> temp) v.push_back(temp);

    string first = v[0];
    string last = v[v.size()-1];

    string s = "";
    for(int i=0 ; i<min(first.size(), last.size()); i++){
        if (first[i]==last[i]){
            s += first[i];
        }
        else break;
    }

    cout << s << endl;
    return 0;
}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cout << "Enter String = ";
    getline(cin,s);
    
    sort(s.begin(),s.end());
    char max_char = s[0];
    int max_count = 1;
    int count = 1;
    
    for (int i=0; i<s.length(); i++){
        if (s[i] == s[i+1]){
            count++;
        }
        else{
            count=1;
        }
        if (count > max_count){
            max_count = count;
            max_char = s[i];
        }
    }

    cout << max_char << " = " << max_count;

    return 0;
}
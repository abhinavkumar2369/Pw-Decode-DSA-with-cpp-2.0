#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin >> n;

    char str[n+1];
    for (int i = 0; i < n; i++){
        cin>>str[i];
    }
    str[n] = '\n';

    for (int i = 0; i < n; i++){
        if (i%2){
            str[i]='#';
        }
    }

    cout << str;

    return 0;
}
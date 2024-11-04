#include<iostream>
#include<string>
using namespace std;

int main(){
    int count = 0;
    int n;
    cin >> n;

    char str[n+1];
    for (int i = 0; i < n; i++){
        cin >> str[i];
    }
    str[n] = '\n';

    for (int i = 0; i < n; i++){
        char ch=tolower(str[i]);
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
        else count++;
    }

    cout << count++;

    return 0;
}
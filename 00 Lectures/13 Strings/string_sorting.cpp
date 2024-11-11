#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;

    cout << "Enter String = ";
    getline(cin,s);
    
    sort(s.begin(),s.end());

    cout << s;
    return 0;
}


// OUTPUT --
// Enter String = Hello World ! How are you ?
//       !?HHWadeellloooorruwy


// NOTE --
// Space will be at starting
// ASCII value of 'A'--- 65
// ASCII value of 'a'--- 97
// ASCII value of '!' --- 33
#include<iostream>
using namespace std;

void sum1toN(int sum, int n){
    if(n==0){
        cout << sum << endl;
    }
    sum1toN(sum+n,n-1);
}

int main(){
    int n;
    cout << "Enter n = ";
    cin >> n;
    
    sum1toN(0,n);
}
#include<iostream>
using namespace std;

void inc_seq(int n){
    if (n==0) return ;
    inc_seq(n-1);
    cout << n << " ";
}

void dec_seq(int n){
    if (n==0) return ;
    cout << n << " ";
    dec_seq(n-1);
}

int main(){
    int n;
    cout << "Enter n = ";
    cin >> n;

    inc_seq(n);
    dec_seq(n-1);
}
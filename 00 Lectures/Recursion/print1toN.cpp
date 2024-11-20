#include<iostream>
using namespace std;

void print(int i,int n){
    if (i>n) return;
    std::cout << i << endl;
    print(i+1, n);
}

int main(){
    int n;
    std::cout << "Enter n = ";
    std::cin >> n;

    print(1,n);
}
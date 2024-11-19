#include<iostream>

void print(int n){
    if (n==0) return;
    std::cout << n << " ";
    print(n-1);
}

int main(){
    int n;
    std::cout << "Enter a number = ";
    std::cin >> n;

    print(n);
}


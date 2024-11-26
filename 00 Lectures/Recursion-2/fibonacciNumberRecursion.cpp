#include<iostream>

int fibonnaci(int n){
    if (n==1 || n==2) return 1;
    return fibonnaci(n-1) + fibonnaci(n-2);
}

int main(){
    for(int i=1;i<10;i++) std::cout<<fibonnaci(i);
    return 0;
}
#include<iostream>

int power(int x,int n){
    if (n==0) return 1;
    else if (n==1) return x;
    return power(x,n/2)*power(x,n/2+n%2);
}

int main(){
    std::cout << power(5,5);   // 3125
    return 0;
}
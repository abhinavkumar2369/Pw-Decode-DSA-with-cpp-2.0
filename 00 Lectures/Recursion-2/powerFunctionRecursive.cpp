#include<iostream>

int power(int x,int n){
    if (n==0) return 1;
    else if (n==1) return x;
    return x*power(x,n-1); 
}


int main(){
    std::cout << power(5,4); // 625
    return 0;
}
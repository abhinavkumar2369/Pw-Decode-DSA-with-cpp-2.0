#include<iostream>

int reverse(int sum,int n){
    if(n==0) return sum;
    return reverse(n%10 + sum*10,n/10);

}

int main(){
    int n;
    std::cout << "Enter n = ";
    std::cin >> n;

    std::cout << reverse(0,n);
}
#include<iostream>

// -------- Recursion --------
int factorial(int n){
    if (n==0 || n==1) return 1;
    return (n*factorial(n-1));
}

int main(){
    int n;
    std::cout << "Enter n = ";
    std::cin >> n;

    std::cout << "Factorial = " << factorial(n); 
}

// ------- using for loop ----------

// int fact = 1;
// for(int i=1; i<=n; i++){
//     fact = fact * i;
// }
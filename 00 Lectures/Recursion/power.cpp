#include<iostream>
using namespace std;

int power(int a,int b){
    int prod = 1;
    for(int i=1;i<=b; i++){
        prod *=a;
    }
    return prod;
}
// TC -- O(n)
// SC -- O(1)

int recursivePower(int n,int p){
    if (p==0) return 1;
    return n*recursivePower(n,p-1);
}
// TC -- O(n)
// SC -- O(n)
// O(n) stack frames

int main(){
    int n,p;
    cout << "Enter n = ";
    cin >> n;
    cout << "Enter p = ";
    cin >> p;
    cout << power(n,p) << endl;
    cout << recursivePower(n,p) << endl;
}
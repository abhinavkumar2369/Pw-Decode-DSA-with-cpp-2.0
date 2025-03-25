#include <iostream>
using namespace std;

bool divisorGame(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    cin >> n;
    cout << (divisorGame(n) ? "true" : "false") << endl;
    return 0;
}

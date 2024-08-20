#include<iostream>
using namespace std;

int main(){
    int array[] = {1,3,5,7,7,9,2};
    int size = sizeof(array)/sizeof(array[0]);
    bool flag = false;

    for (int i=0 ; i<=size ; i++){
        for (int j=0 ; j<=size ; j++){
            if (array[i]==array[j] && i!=j){
                flag = true;
            }
        }
    }

    if (flag==true) cout << "Contains duplicates";
    else cout << "Do not contains duplicates";
}
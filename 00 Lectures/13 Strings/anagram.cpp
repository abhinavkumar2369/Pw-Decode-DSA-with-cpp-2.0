#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s = "physicswallah";
    string t = "wallahphysics";

    if (s.size() != t.size()) return false;

    sort(s.begin(),s.end());   // ------> O(n logn)
    sort(t.begin(),t.end());   // ------> O(n logn)
    
    if (s==t) return true;
    
    return false;
}

// NOTE --
// An anagram of a string is a string that contains the same characters in both the strings, except the order of characters can be different in the strings.
// This have good space efficiency but not good time efficiency over the Leetcode-242.
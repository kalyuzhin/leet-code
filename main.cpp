#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,popcnt,lzcnt,abm,bmi,bmi2,fma,tune=native")

#include <ios>
#include <iostream>
//#include "easy/easy.h"
#include "medium/medium.h"

using namespace std;

using ll = long long;
using ull = unsigned long long;
using str = string;

template<typename T>
using v = vector<T>;

template<typename T>
inline std::ostream &operator<<(std::ostream &os, const v<T> &vec) {
    for (const auto &elem: vec) {
        os << elem << " ";
    }
    return os;
}

void solve() {
    str s1 = "bpfbhmipx";
    str s2 = "abcabcbb";
    str s3 = "bbbbb";
    str s4 = "pwwkew";
    str s5 = "dvdf";
    str s6 = "ckilbkd";
    str s7 = "abba";
    str s8 = "aabaab!bb";
    vector<str> strs = {s1, s2, s3, s4, s5, s6, s7, s8};
    for (str s: strs) {
        cout << lengthOfLongestSubstring(s) << "\n";
    }

}

int main() {
    ios::sync_with_stdio(NULL), cin.tie(0), cout.tie(0);
    int numTestCases = 1;
    while (numTestCases--) {
        solve();
    }
    return 0;
}
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,popcnt,lzcnt,abm,bmi,bmi2,fma,tune=native")

#include <ios>
#include <iostream>
#include "easy/easy.h"

using namespace std;

using ll = long long;
using ull = unsigned long long;

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
}

int main() {
    ios::sync_with_stdio(NULL), cin.tie(0), cout.tie(0);
    int numTestCases = 1;
    while (numTestCases--) {
        solve();
    }
    return 0;
}
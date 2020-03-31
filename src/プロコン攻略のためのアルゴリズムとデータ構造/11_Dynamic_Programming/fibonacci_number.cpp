// 2020/02/15

// 11.2 フィボナッチ数列

// 動的計画法の基本構造：
// 一度計算した値を記録しておくことによって再計算を回避する．

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n; cin >> n;
    int F[50];
    F[0] = F[1] = 1;

    for (int i = 2; i <= n; i++) {
        F[i] = F[i-1] + F[i-2];
    }

    cout << F[n] << endl;

    return 0;
}
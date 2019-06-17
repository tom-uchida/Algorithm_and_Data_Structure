// 2019/06/17

// イテレータは，共通のインタフェース（関数などの使い方）でコンテナに対する反復処理を行うことができるポインタのようなものと考えることができる．

#include<iostream>
#include<vector>

void print(std::vector<int> v) {
    // ベクタの先頭から順番にアクセス
    std::vector<int>::iterator it;
}

int main() {
    int N = 4;
    std::vector<int> v;

    for (int i = 0; i < N; i++) {
        int x;
        std::cin >> x;
        v.push_back(x);
    }

    print(v);

    return 0;
}
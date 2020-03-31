// 2019/06/17

// イテレータは，共通のインタフェース（関数などの使い方）でコンテナに対する反復処理を行うことができるポインタのようなものと考えることができる．

#include<iostream>
#include<vector>

void print(std::vector<int> v) {
    // ベクタの先頭から順番にアクセス
    std::vector<int>::iterator it;
    for ( it = v.begin(); it != v.end(); it++ ) {
        std::cout << *it;
    }

    std::cout << std::endl;
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

    std::vector<int>::iterator it = v.begin();
    *it = 3; // 先頭の要素 v[0] を 3 にする
    it++; // 一つ前に進める
    (*it)++; // v[1]の要素に 1 加算する

    print(v);

    return 0;
}
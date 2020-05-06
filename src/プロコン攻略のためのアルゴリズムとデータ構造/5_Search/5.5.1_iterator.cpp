// イテレータはSTLのコンテナの要素に対して反復処理を行うためのオブジェクト．
// イテレータはあるコンテナ内の特定の位置を示すもの．

// イテレータの特徴は，どの種類のコンテナに対しても同じ方法（文法）でそれらの要素に順番にアクセスできるということ．
// さらに，配列の要素に対しては，C/C++言語の通常のポインタのように扱うことができる．
// つまり，イテレータは，共通のインタフェースでコンテナに対する反復処理を行うことができるポインタのようなものと考えることができる．

#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v) {
    // ベクタの先頭から順にアクセス
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++) {
        cout << *it;
    }
    cout << endl;
}

int main() {
    int N = 4;
    vector<int> v;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    print(v);

    vector<int>::iterator it = v.begin();
    *it = 3; // 先頭の要素v[0]を3にする
    it++; // 1つ前に進める
    (*it)++; // v[1]の要素に1加算する

    print(v);

    return 0;
}
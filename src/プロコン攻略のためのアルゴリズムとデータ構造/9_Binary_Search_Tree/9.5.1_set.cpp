// 要素の集合を管理するSTLのコンテナは大きく以下の2種類に分けられる．
//  - シーケンスコンテナと呼ばれる順序付きのコレクション
//  - 連想コンテナと呼ばれるソートされたコレクション

// シーケンスコンテナでは，追加される要素はその値に関係なく特定の位置に配置され，
// その位置は挿入した時間と場所に依存する．
// vectorやlistが代表的なシーケンスコンテナ

// 一方，連想コンテナでは，追加される要素の位置は何らかのソート基準に従って決められる．
// STLでは，set, map, multiset, multimapを提供している．
// 連想コンテナの特徴は，常に二分探索が行えることであり，要素の探索を高速に行うことができる．


// setは，要素が値によってソートされている集合で，
// 挿入された要素は集合の中にただ1つ存在し，要素の重複がない．
#include<iostream>
#include<set>
using namespace std;

void print(set<int> S) {
    cout << S.size() << ":";
    for ( set<int>::iterator it = S.begin(); it != S.end(); it++) {
        cout << " " << (*it);
    }
    cout << endl;
}

int main() {
    set<int> S;

    S.insert(8);
    S.insert(1);
    S.insert(7);
    S.insert(4);
    S.insert(8);
    S.insert(4);

    print(S); // 4: 1 4 7 8

    S.erase(7);

    print(S); // 3: 1 4 8

    S.insert(2);

    print(S); // 4: 1 2 4 8

    if (S.find(10) == S.end()) cout << "not found." << endl;
    // not found.

    return 0;
}
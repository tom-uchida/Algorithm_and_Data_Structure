// mapはキーと値の組を要素とする集合で，
// 各要素は1つのキーと1つの値を持ち，キーをソートの基準とする．
// 集合の中で各キーは必ず1つだけ存在し，重複はない．
// 例えば，文字列から文字列を引くような辞書の機能を実装するために用いることができる．
#include<iostream>
#include<map>
#include<string>
using namespace std;

void print(map<string, int> T) {
    map<string, int>::iterator it;
    cout << T.size() << endl;
    for (it = T.begin(); it != T.end(); it++) {
        pair<string, int> item = *it;
        cout << item.first << "--> " << item.second << endl;
    }
}

int main() {
    map<string, int> T;

    T["red"] = 32;
    T["blue"] = 688;
    T["yellow"] = 122;

    T["blue"] += 312;

    print(T);

    T.insert(make_pair("zebra", 101010));
    T.insert(make_pair("white", 0));
    T.erase("yellow");

    print(T);

    pair<string, int> target = *T.find("red");
    cout << target.first << "-->" << target.second << endl;

    // 出力
    // 3
    // blue --> 1000
    // red --> 32
    // yellow --> 122
    // 4
    // blue --> 1000
    // red --> 32
    // white --> 0
    // zebra --> 101010
    // red --> 32

    return 0;
}
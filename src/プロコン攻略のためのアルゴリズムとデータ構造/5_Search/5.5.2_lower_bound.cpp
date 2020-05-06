// lower_boundはソートされた範囲に対するアルゴリズムで，
// 指定した値value以上の最初の要素の位置をイテレータで返す．
// 一方，upper_boundは指定した値valueより大きい最初の要素の位置を返す．

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int A[14] = {1, 1, 2, 2, 2, 4, 5, 5, 6, 8, 8, 8, 10, 15};
    int *pos;
    int idx;

    pos = lower_bound(A, A+14, 3);
    idx = distance(A, pos);
    cout << "A[" << idx << "] = " << *pos << endl;

    pos = lower_bound(A, A+14, 2);
    idx = distance(A, pos);
    cout << "A[" << idx << "] = " << *pos << endl;

    // 出力
    // A[5] = 4
    // A[2] = 2

    // lower_bound()の最初の2つの引数で，対象となる配列やコンテナの範囲を指定する．
    // lower_bound()の3つ目の引数にvalueを指定する．
    // ここでは，valueが3なので，3以上で最初の要素であるA[5](=4)を指すポインタが*posに代入される．
    // distanceは2つのポインタの距離を返す関数で，
    // distance(A, pos)はAの先頭とposとの距離(=5)を返す．

    return 0;
}
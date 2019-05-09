// 2019/05/09

#include <iostream>
using namespace std;

int bubbleSort(int A[], int N) {
    int sw = 0;
    bool flag = 1;

    // i:未ソート部分の先頭を指すループ変数で，配列の先頭から末尾に向かって移動する．
    // j:未ソート部分の隣り合う要素を比較するためのループ変数で，Aの末尾であるN-1から開始し，i+1まで減少する．
    for ( int i = 0; flag; i++ ) {
        flag = 0;
        for ( int j = N - 1; j >= i + 1; j-- ) {
            if ( A[j] < A[j -1] ) {
                // 隣接要素を交換する
                swap(A[j], A[j - 1]);
                flag = 1;
                sw++;
            }
        }
    }

    return sw;
}

int main() {
    // A[]:要素
    // N:要素数
    // sw:交換回数
    int A[100], N, sw;
    cin >> N;
    for ( int i = 0; i < N; i++ ) cin >> A[i];

    sw = bubbleSort(A, N);

    for ( int i = 0; i < N; i++ ) {
        if (i) cout << " ";
        cout << A[i];
    }
    cout << endl;
    cout << sw << endl;

    return 0;
}
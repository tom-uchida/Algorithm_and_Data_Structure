// 2019/05/09

#include <iostream>

// 配列の要素を順番に出力
void trace(int A[], int N) {
    int i;
    for ( int i = 0; i < N; i++ ) {
        if ( i > 0 ) std::cout << " ";
        std::cout << A[i];
    }

    std::cout << std::endl;
}

void insertionSort(int A[], int N) {
    // v:A[i]の値を一時的に保存しておくための変数
    int j, i, v;
    for ( i = 1; i < N; i++ ) {
        v = A[i];
        j = i - 1;
        while ( j >= 0 && A[j] > v ) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = v;
        trace(A, N);
    }
}

int main() {
    // i:未ソートの部分列の先頭を示すループ変数
    // j:ソート済み部分列からvを挿入するための位置を探すループ変数
    int N, i, j;
    int A[100];

    std::cin >> N;
    for ( int i = 0; i < N; i++ ) std::cin >> A[i];

    std::cout << std::endl;
    trace(A, N);
    insertionSort(A, N);

    return 0;
}
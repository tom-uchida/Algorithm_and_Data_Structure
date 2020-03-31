// 2019/06/02

// ラウンドロビンスケジューリングをシミュレートするプログラム

// 入力例:
//  5 100
//  p1 150
//  p2 80
//  p3 200
//  p4 350
//  p5 20

// 出力例:
//  p2 180
//  p5 400
//  p1 450
//  p3 550
//  p4 800

#include <iostream>
const int LEN = 100005;

// プロセスを表す構造体
typedef struct pp {
    char name[100];
    int t;
} P;

P Q[LEN];
int head, tail, n;

void enqueue(P x) {
    Q[tail] = x;
    tail = (tail + 1) % LEN;
    std::cout << "tail : " << tail << std::endl;
}

P dequeue() {
    P x = Q[head];
    head = (head + 1) % LEN;
    std::cout << "head : " << head << std::endl;
    return x;
}

// 最小値を返す
int min(int a, int b) {return a < b ? a : b; }

int main() {
    int elaps = 0, c;
    int i, q;
    P u;
    scanf("%d %d", &n , &q); // n:プロセス数, q:最大処理時間

    // 全てのプロセスをキューに順番に追加する
    for ( i = 1; i <= n; i++ ) {
        scanf("%s", Q[i].name); // プロセス名
        scanf("%d", &Q[i].t);   // プロセスに必要な処理時間
    }
    head = 1; tail = n + 1;

    // シミュレーション
    while( head != tail ) {
        u = dequeue();
        c = min(q, u.t); // q または必要な処理時間 u.t だけ処理をおこなう
        u.t -= c;        // 残りの必要時間を計算
        elaps += c;      // 経過時間を加算
        if ( u.t > 0 ) enqueue(u); // 処理が完了していなければキューに追加
        else {
            std::cout << u.name << " " << elaps << std::endl;
        }
    }

    return 0;
}
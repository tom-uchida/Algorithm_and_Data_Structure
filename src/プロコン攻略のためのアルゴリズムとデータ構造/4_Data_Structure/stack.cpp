// 2019/06/01

// 逆ポーランド記法は，演算子をオペランドの後に記述するプログラム（数式）を記述する記法．
// 例えば，(1+2)*(5+4)は，逆ポーランド記法では1 2 + 5 4 + *と記述される．
// 逆ポーランド記法では，括弧が不要である，というメリットがある．

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
#include <iostream>

int top, S[1000];

void push(int x) {
    // topを加算してから，その位置へ挿入
    S[++top] = x;
}

int pop() {
    top--;
    // topが指していた要素を返す
    return S[top+1];
}

int main() {
    int a, b;
    top = 0;
    char s[100];

    // 「Ctr+D」が押されるまで
    while( scanf("%s", s) != EOF ) {
        if ( s[0] == '+' ) {
            a = pop();
            b = pop();
            push(a + b);

        } else if ( s[0] == '-' ) {
            b = pop();
            a = pop();
            push(a - b);

        } else if ( s[0] == '*' ) {
            a = pop();
            b = pop();
            push(a * b);

        } else {
            // 文字列で表現された数値をint型の数値に変換して，push
            push( atoi(s) );
        }

        std::cout   <<  "S[0]:" << S[0] 
                    << " S[1]:" << S[1] << std::endl;
    }

    // printf("%d\n", pop());
    std::cout << pop() << std::endl;

    return 0;
}
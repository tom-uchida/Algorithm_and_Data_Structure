// 2019/06/03

#include <iostream>
#include <cstdlib>
#include <stack>
// using namespace std;

int main() {
    // 標準ライブラリから stack を使用
    std::stack<int> S;
    int a, b, x;
    std::string s;

    while ( std::cin >> s ) {
        if ( s[0] == '+' ) {
            a = S.top(); S.pop();
            b = S.top(); S.pop();
            S.push(a + b);
        } else if ( s[0] == '-' ) {
            b = S.top(); S.pop();
            a = S.top(); S.pop();
            S.push(a - b);
        } else if ( s[0] == '*' ) {
            a = S.top(); S.pop();
            b = S.top(); S.pop();
            S.push(a * b);
        } else {
            // s(string型)をc_str()でchar型に変換してからatoi()に渡す
            S.push(atoi(s.c_str()));
        }
    }

    std::cout << S.top() << std::endl;
    
    return 0;
}
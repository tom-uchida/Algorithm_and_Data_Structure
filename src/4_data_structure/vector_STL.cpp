// 2019/06/17

// vectorは可変長配列として用いることができる便利なデータ構造であるが，
// 要素数がnのvectorに対する特定の位置へのデータの挿入や削除にはO(n)のアルゴリズムが用いられるので注意が必要

#include <iostream>
#include <vector>
// using namespace std;

void print(std::vector<double> V) {
    for ( int i = 0; i < V.size(); i++ ) {
        std::cout << V[i] << " ";
    }

    std::cout << std::endl;
}

int main() {
    std::vector<double> V;

    V.push_back(0.1);
    V.push_back(0.2);
    V.push_back(0.3);
    V[2] = 0.4;
    print(V); // 0.1 0.2 0.4

    V.insert(V.begin() + 2, 0.8);
    print(V); // 0.1 0.2 0.8 0.4

    V.erase(V.begin() + 1);
    print(V); // 0.1 0.8 0.4

    V.push_back(0.9);
    print(V); // 0.1 0.8 0.4 0.9

    return 0;
}